#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int val[n],wt[n];
	for(int i=0;i<n;i++)
	cin>>val[i]; 
	
	for(int i=0;i<n;i++)
	cin>>wt[i];
	
	int total;
	cin>>total;
	
	int dp[n][total+1];  //2D table to store values
	
	for(int i=0;i<n;i++)  //first column initialized to 0
	dp[i][0]=0;
	
	for(int i=0;i<n;i++)
	{
	    for(int j=1;j<=total;j++)
	    {
	        if(i==0)  //for first row
	        {
	           if(wt[i]>j)
	            dp[i][j]=0;
	           else
	            dp[i][j]=val[i];
	        }
	        else{
	        if(wt[i]>j)
	          dp[i][j]=dp[i-1][j];
	        else
	          dp[i][j]=max(dp[i-1][j],val[i]+dp[i-1][j-wt[i]]);
	        }
	        
	    }
	}
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<=total;j++)
	         cout<<dp[i][j]<<" "; 
	         
	  cout<<endl;       
   }
   cout<<endl;
   int i=n-1;
   int j=total;
   int s=0;
   while(1)
   {
       if(i==0)  //on reaching first row
        break;
       if(dp[i][j]==dp[i-1][j])
          i--;
       else
       {
           
           cout<<wt[i]<<" "<<val[i]<<endl;
           s+=val[i];
           j=j-wt[i];
           i--;
       }
   }
   cout<<"Maximum value subset is "<<s;  //maximum value of val array
}
