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
    ll n,ans=0;
    int f=0;
    cin>>n;
    // cout<<ceil(log2(3))<<endl;
    // cout<<floor(log2(3))<<endl;

    if(n==1)
    cout<<0<<endl;

    else if(ceil(log2(n))==floor(log2(n)))
    cout<<-1<<endl;


    else
    {
      while(n!=1)
      {
        if(n%6!=0)
        n=n*2;
        else if(n%6==0)
        n=n/6;

        ans++;

        if(ceil(log2(n))==floor(log2(n)) && n!=1)
        {
          f=1;
          break;
        }
      }
      if(f==1)
      cout<<-1<<endl;
      else
      cout<<ans<<endl;
    }
  }
  return 0;

}
