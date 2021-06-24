#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int power(int x,  int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}

void solve()
{
  int n;
  cin>>n;
  int p = sqrt(n);
  int cnt=0;
  map<int,int> m;
  for(int i=2;i<=p;i++)
  {
    int a=2;
    int pwr = power(i,a);
    while(pwr<=n)
    {
      cnt++;
      m[pwr]++;
      a++;
      pwr = power(i,a);
    }
  }
  cout<<n-m.size()<<endl;
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
