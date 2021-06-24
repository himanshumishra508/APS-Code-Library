#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,a,i,prod=1,temp,ans,b;
  vector<int> v;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a;
    prod*=a;
    v.pb(a);
  }
  for(i=0;i<n;i++)
  {
    if(i%2==0)
    cout<<v[i+1]*-1<<" ";
    else
    cout<<v[i-1]<<" ";
  }
  cout<<endl;
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
