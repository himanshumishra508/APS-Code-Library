#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main() 
{
	io;
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,k;
	    cin>>n>>x>>k;
	    bool ans =false;
	    if(x%k==0)
	    ans=true;
	    
	    x= n - x + 1;
	    //cout<<x<<endl;
	    if(x%k==0)
	    ans=true;
	    
	    ans ? cout<<"YES\n" : cout<<"NO\n";
	    
	}
	return 0;
}
