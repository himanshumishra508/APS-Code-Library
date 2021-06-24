#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int x,y,z;
  cin>>x>>y>>z;
  if(x==(y+z) || y==(x+z) || z==(x+y))
  cout<<"YES\n";
  else
  cout<<"NO\n";
}

int32_t main()
{
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
