#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,x,a,max=0,min=0;
  cin>>n>>x;
  while(n--)
  {
    cin>>a;
    min+=a;
    a=(a / x) + ((a % x) != 0);
    max+=a;

  }
  min=(min / x) + ((min % x) != 0);
  cout<<min<<" "<<max<<endl;
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
