#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i,M,a;
  vector <int> v;
  M=INT_MIN;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a;
    v.pb(a);
    if(a>M)
    M=a;
  }
  int ans=-1;
  for(i=0;i<n;i++)
  {
    if(v[i]==M)
    {
      if((i-1)>=0 && v[i]>v[i-1])
      {
        ans=i;
        break;
      }
      else if((i+1)<n && v[i]>v[i+1])
      {
        ans=i;
        break;
      }

    }
  }
  if(ans==-1)
  cout<<ans<<endl;
  else
  cout<<ans+1<<endl;
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
