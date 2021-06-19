#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,s,p,v,i,ans=0,t;
    cin>>n;
    vector <ll> vi;
    /*cin>>s>>v>>p;
    ans=floor(p/(s+1));
    ans=ans*v;*/

    for(i=0;i<n;i++)
    {
      cin>>s>>p>>v;
      t=(p/(s+1));
      t=t*v;
      vi.pb(t);
    }
    cout<<*max_element(vi.begin(),vi.end())<<endl;
  }
  return 0;
}
