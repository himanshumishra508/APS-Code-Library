#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
   int n,k,i;
   string s;
   vector<int> v;
   cin>>n>>k;
   cin>>s;
   for(i=0;i<n;i++)
   {
     if(s[i]=='*')
     v.pb(i);
   }
   int ans=0;
   int prev;
   int sz = v.size();
   for(i=0;i<sz;i++)
   {
     if(i==0)
     {
       ans++;
       prev=v[i];
     }
     else if(i==sz-1)
     ans++;
     else
     {
       if((v[i+1]-prev)>k)
       {
         ans++;
         prev=v[i];
       }

     }
     
   }
   cout<<ans<<endl;

}


int32_t main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

  io;
  int t;
  t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
