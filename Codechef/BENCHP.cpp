#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
  int n,w,wr,i,a;
  cin>>n>>w>>wr;
  map<int,int> m;
  for(i=0;i<n;i++)
  {
    cin>>a;
    m[a]++;
  }
  if(wr>=w)
  {
    cout<<"YES\n";
  }
  else
  {
    bool ans=false;
    a=w-wr;
    int sum=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
      if((it->second)%2==0)
      sum+=(it->first)*(it->second);
      if(sum>=a)
      {
        ans=true;
        break;
      }
    }
    if(ans)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  
  
}

int32_t main()
{
 
    //  #ifndef ONLINE_JUDGE
    //      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    //  #endif
 
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