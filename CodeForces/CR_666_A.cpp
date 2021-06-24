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
    ll n,i,j;
    string s;
    map <char,ll> m;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>s;
      for(j=0;s[j]!='\0';j++)
      {
        m[s[j]]++;
      }
    }
    bool b=true;
    for(auto it=m.begin();it!=m.end();it++)
    {
      if((it->second)%n!=0)
      {
        b=false;
        break;
      }
    }
    if(b)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  return 0;
}
