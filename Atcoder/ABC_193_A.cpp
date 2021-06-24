#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int a,b;
  cin>>a>>b;

  int d= a-b;
  double c = double(d)/a;
  //cout<<c<<endl;
  cout<<fixed<<setprecision(2)<<c*100.0<<endl;
}

int32_t main()
{
  io;
  int t;
  t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
