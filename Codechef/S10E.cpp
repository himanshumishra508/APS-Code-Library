#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	ll t,n,p[105];
	cin>>t;
	while(t--)
	{
	    ll i,ans=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>p[i];
	    }
	    
	    for(i=1;i<n;i++)
	    {
	        if(i==1)
	        {
	            if(p[i]<p[0])
	            ans++;
	        }
	        
	        else if(i==2)
	        {
	            if(p[i]<p[0] && p[i]<p[1])
	            ans++;
	        }
	        
	        else if(i==3)
	        {
	            if(p[i]<p[0] && p[i]<p[1] && p[i]<p[2])
	            ans++;
	        }
	        
	        else if(i==4)
	        {
	            if(p[i]<p[0] && p[i]<p[1] && p[i]<p[2] && p[i]<p[3])
	            ans++;
	        }
	        
	        else
	        {
	            if(p[i]<p[i-1] && p[i]<p[i-2] && p[i]<p[i-3] && p[i]<p[i-4] && p[i]<p[i-5])
	            ans++;
	        }
	        
	    }
	    cout<<ans+1<<endl;
	}
	return 0;
}
