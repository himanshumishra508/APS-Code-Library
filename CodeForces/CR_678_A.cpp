#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,m,sum=0,a;
  cin>>n>>m;
  while(n--)
  {
    cin>>a;
    sum+=a;
  }
  if(sum==m)
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
