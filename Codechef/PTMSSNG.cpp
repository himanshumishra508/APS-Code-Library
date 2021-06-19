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
    ll n,x,y,pt1,pt2;
    map <ll,ll> X,Y;

    cin>>n;
    n=(4*n)-1;
    while(n--)
    {
      cin>>x>>y;
      X[x]++;
      Y[y]++;
    }
    for(auto it=X.begin();it!=X.end();it++)
    {
      // cout<<it->first<<" "<<it->second<<endl;
      if((it->second)%2!=0)
      {
        pt1=it->first;
        break;
      }
    }
    for(auto it=Y.begin();it!=Y.end();it++)
    {
      if((it->second)%2!=0)
      {
        pt2=it->first;
        break;
      }
    }
    cout<<pt1<<" "<<pt2<<endl;
  }
}
