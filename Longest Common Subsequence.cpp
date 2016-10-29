#include<bits/stdc++.h>
using namespace std;
main()
{
    string a,b;
    cin>>a>>b;
    int la=a.size();
    int lb=b.size();
    int dp[la+1][lb+1];
    
    for(int i=0;i<=la;i++)
     dp[0][i]=0;
     
     for(int i=0;i<=lb;i++)
     dp[i][0]=0;
     
     for(int i=1;i<=la;i++)
     {
         for(int j=1;j<=lb;j++)
         {
             if(a[i-1]==b[j-1])
             dp[i][j]=1+dp[i-1][j-1];
             else
             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
         }
     }
     cout<<"length of longest common subsequence : "<<dp[la][lb];
     
      
}
