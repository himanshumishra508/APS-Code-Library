#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,a,ans=0,min,i;
    cin>>n;
    cin>>a;
    ans=ans+a;
    min=a;
    for(i=1;i<n;i++)
    {
      cin>>a;
      if(a<min)
      min=a;

      ans=ans+min;
    }
    cout<<ans<<endl;
  }
}
