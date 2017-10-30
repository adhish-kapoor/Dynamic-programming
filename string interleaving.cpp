#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    int la=a.size();
	    int lb=b.size();
	    bool dp[la+1][lb+1];
	    int no;
	    cin>>no;
	    while(no--)
	    {
	        string c;
	        cin>>c;
	        int lc=c.size();
	        memset(dp,false,sizeof(dp));
	        if(la+lb!=lc)
	        cout<<"NO\n";
	        else{
	        for(int i=0;i<=la;i++)
	        {
	            for(int j=0;j<=lb;j++)
	            {
	                //both strings are empty
	                if(i==0 and j==0)
	                dp[i][j]=true;
	                //a is empty
	                else if(i==0 and b[j-1]==c[j-1])
	                dp[i][j]=dp[i][j-1];
	                //b is empty
	                else if(j==0 and a[i-1]==c[i-1])
	                dp[i][j]=dp[i-1][j];
	                //current char of c matches with a,not with b
	                else if(a[i-1]==c[i+j-1] and b[j-1]!=c[i+j-1])
	                dp[i][j]=dp[i-1][j];
	                //current char of c matches with b,not with a
	                else if(b[j-1]==c[i+j-1] and a[i-1]!=c[i+j-1])
	                dp[i][j]=dp[i][j-1];
	                //current char of c matches with both a and b
	                else if(a[i-1]==c[i+j-1] and b[j-1]==c[i+j-1])
	                dp[i][j]=(dp[i-1][j]||dp[i][j-1]);
	            }
	        }
	        if(dp[la][lb]==true)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        }
	    }
	}
}
