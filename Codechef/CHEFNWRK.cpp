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
    ll n,k,w,i,ans=0,flag=0,wt;
    cin>>n>>k;
    wt=k;

    for(i=0;i<n;i++)
    {
      cin>>w;
      if(w>k)
      flag=1;

      else
      {
        if(wt<w)
        {
          ans++;
          wt=k-w;
        }
        else
        {
          wt=wt-w;
        }
      }
    }
    ans++;
    if(flag==1)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;
  }
  return 0;
}
