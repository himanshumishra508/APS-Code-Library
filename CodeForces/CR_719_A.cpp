#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i;
  int vis[26]={0};
  string s;
  cin>>n;
  cin>>s;
  bool ans=true;
  for(i=0;i<n;i++)
  {
    if(vis[s[i]-'A']==0)
    {
      vis[s[i]-'A']=1;
    }
    
    else if( i>0 && vis[s[i]-'A']==1 && s[i-1]!=s[i])
    {
      ans=false;
      break;
    }
    
  }
  ans ?  cout<<"YES\n" : cout<<"NO\n";
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