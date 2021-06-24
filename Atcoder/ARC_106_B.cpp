#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector <int> v[200005];
int a[200005],b[200005];
bool vis[200005];
int suma=0,sumb=0;

void dfs(int s)
{
  vis[s]=true;
  suma+=a[s];
  sumb+=b[s];
  int j;
  for(j=0;j<v[s].size();j++)
  {
    if(vis[v[s][j]]==false)
    dfs(v[s][j]);
  }
}


void solve()
{
  int n,m,i,x,y;
  bool ans=true;
  memset(vis,false,sizeof(vis));
  cin>>n>>m;
  for(i=1;i<=n;i++)
  {
    cin>>a[i];
  }

  for(i=1;i<=n;i++)
  {
    cin>>b[i];
  }
  for(i=0;i<m;i++)
  {
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
  }
  for(i=1;i<=n;i++)
  {
    suma=0;
    sumb=0;
    if(vis[i]==false)
    {
      dfs(i);
      if(suma!=sumb)
      ans=false;
    }


  }
  if(ans)
  cout<<"Yes\n";
  else
  cout<<"No\n";
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
