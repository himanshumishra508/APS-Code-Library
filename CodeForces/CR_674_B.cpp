#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,m,a,b,c,d,i;

  bool ans=false;
  cin>>n>>m;
  for(i=0;i<n;i++)
  {
    cin>>a>>b;
    cin>>c>>d;
    if(b==c)
    ans=true;
  }
  if(ans && m%2==0)
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
