#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,a,p,x,i;
  cin>>n;
  int ans=INT_MAX;
  for(i=0;i<n;i++)
  {
    cin>>a>>p>>x;
    x= x-a;
    if(x>0 && ans>p)
    ans=p;

  }
  if(ans==INT_MAX)
  cout<<-1<<endl;
  else
  cout<<ans<<endl;
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
 