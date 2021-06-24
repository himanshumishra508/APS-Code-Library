#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i,a,idx;
  vector <int> v;
  map <int,int> m;
  bool ans=false;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a;
    v.pb(a);
    m[a]++;
  }
  for(auto it=m.begin();it!=m.end();it++)
  {
    if((it->second)==1)
    {
      ans=true;
      a=it->first;
      break;
    }
  }
  if(!ans)
  cout<<"-1\n";
  else
  {
    for(i=0;i<n;i++)
    {
      if(v[i]==a)
      {
        idx=i;
        break;
      }
    }
    cout<<idx+1<<endl;
  }
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
