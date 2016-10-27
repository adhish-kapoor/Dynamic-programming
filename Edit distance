#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    string b;
	    cin>>a>>b;
	    int la=a.size();
	    int lb=b.size();
	    int dp[la+1][lb+1];   //to store results of subproblems
	    for(int i=0;i<=la;i++)
	    {
	        for(int j=0;j<=lb;j++)
	        {
	            if(i==0)      //empty first string
	            dp[i][j]=j;
	            else if(j==0) //empty second string
	            dp[i][j]=i;
	            else if(a[i-1]==b[j-1]) //last char matches
	            dp[i][j]=dp[i-1][j-1];  //value from diagonal
	            else
	            dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j])); //minimum from top,diagonal or left value
	        }
	    }
	    cout<<dp[la][lb]<<endl;
	}
}
