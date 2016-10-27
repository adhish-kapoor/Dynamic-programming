#include<bits/stdc++.h>
using namespace std;
#define INF 999
int main()
{
    int n;
    cin>>n;               //no. of nodes
    int a[n][n],cost[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cost[i][j]=a[i][j];
        
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]); //k is an intermediate node
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(cost[i][j]==INF)
            cout<<'~'<<" ";      //'~'is infinity
            else
            cout<<cost[i][j]<<" ";
        }
        
        cout<<"\n";
    }
}
