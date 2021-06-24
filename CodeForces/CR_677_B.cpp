#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,a,i;
  cin>>n;
  int prev=-1,cnt=0,ans=0;
  bool b=false,bp=false;
  for(i=0;i<n;i++)
  {
    cin>>a;
    if(a==1)
    {
      b=true;
    }

    if(b && a==0)
    bp=true;

    if(bp && a==0)
    cnt++;

    if(bp && a==1)
    {
      bp=false;
      ans+=cnt;
      cnt=0;
    }

  }
  cout<<ans<<endl;
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
