#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
  int n,i,a,q,sum=0,mod=1000000007;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a;
    sum+=a;
  }
  //cout<<sum<<endl;
  cin>>q;
  while(q--)
  {
    cin>>a;
    sum = (((sum*2)%mod) + mod)%mod;
    cout<<sum<<endl;
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
  //cin>>t;
  while(t--)
  {
    solve();
  }
  
  return 0;
}