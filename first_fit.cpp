#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"how many blocks are there?"<<endl;
    int m;cin>>m;
    cout<<"how many process are there?"<<endl;
    int n;cin>>n;
    int blockSize[m];
    cout<<"enter block size serially"<<endl;
    for(int i=0;i<m;i++) cin>>blockSize[i];
    int processSize[n];
    cout<<"enter process size serially"<<endl;
    for(int i=0;i<n;i++) cin>>processSize[i];
    int allocation[n];
    for(int i=0;i<n;i++) allocation[i]=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (blockSize[j]>=processSize[i])
            {
                allocation[i]=j;
                blockSize[j]-=processSize[i];
                break;
            }
        }
    }
    cout << "Process No.\tProcess Size\tBlock no.\n";
    for (int i=0;i<n;i++)
    {
        cout <<" "<<i+1<<"\t\t\t"<<processSize[i]<<"\t\t\t\t";
        if (allocation[i]!=-1) cout<<allocation[i]+1<<endl;
        else cout << "Not Allocated"<<endl;
    }
}
