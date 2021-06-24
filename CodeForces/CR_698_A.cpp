#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i,a,ans=INT_MIN;
  cin>>n;
  map<int,int> m;
  set<int> s;
  for(i=0;i<n;i++)
  {
    cin>>a;
    m[a]++;
  }
  for(auto it=m.begin();it!=m.end();it++)
  {
    if(ans<(it->second))
    ans=it->second;
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
