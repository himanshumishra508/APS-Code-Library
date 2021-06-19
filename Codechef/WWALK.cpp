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
    ll n,x,ans=0,i,a_dis=0,b_dis=0;
    vector <ll> a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>x;
      a.pb(x);
    }
    for(i=0;i<n;i++)
    {
      cin>>x;
      b.pb(x);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]==b[i] && a_dis==b_dis)
      {
        ans=ans+a[i];
      }
      a_dis=a_dis+a[i];
      b_dis=b_dis+b[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}
