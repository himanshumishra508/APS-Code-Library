#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i,a;
  cin>>n;
  map<int,int> m;
  vector<int> v;
  while(n--)
  {
    cin>>a;
    v.pb(a);
    m[a]++;
  }
  int ans;
  for(auto it=m.begin();it!=m.end();it++)
  {
    if(it->second==1)
    ans=it->first;
  }
  auto it = find(v.begin(),v.end(),ans);
  cout<<it-v.begin()+1<<endl;
}


int32_t main()
{
 
     #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
     #endif
 
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