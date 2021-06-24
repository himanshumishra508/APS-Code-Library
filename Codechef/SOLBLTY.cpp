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
	    int x,a,b,answer;
	    cin>>x>>a>>b;
	    answer = (a*10);
	    answer=answer+((100-x)*b*10);
	    cout<<answer<<"\n";
	}
	return 0;
}
