#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,a,i,arr[200005]={0};
    int flag=0;
    map<ll,ll> m;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      m[a]++;
      arr[a]++;
      if(arr[a]>=3)
      flag=1;
    }
    auto it=m.end();
    it--;
    if(it->second>=2)
    flag=1;

    if(flag==1)
    cout<<"NO"<<endl;

    else
    {
      cout<<"YES"<<endl;
      for(auto it=m.begin();it!=m.end();it++)
      {
        cout<<it->first<<" ";
        it->second--;
      }
      for(auto it=m.rbegin();it!=m.rend();it++)
      {
        if(it->second!=0)
        cout<<it->first<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
