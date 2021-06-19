#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
  io;
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,ans,i,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>x>>y;
    }
    ans=n;
    while(n>=3)
    {
      n=n/2;
      if(n>=3)
      ans=ans+n;
    }
    cout<<ans<<endl;
  }
  return 0;
}
