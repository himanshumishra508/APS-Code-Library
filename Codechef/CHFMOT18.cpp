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
    ll s,n,ans,x;
    cin>>s>>n;
    if(s<=n && s%2==0)
    cout<<1<<endl;

    else
    {
      if(s%n==0)
      cout<<s/n<<endl;

      else
      {
        ans=s/n;
        x=s%n;
        if(x%2==0)
        ans=ans+1;
        else
        {
          if(x==1)
          ans=ans+1;
          else
          ans=ans+2;
        }
        cout<<ans<<endl;
      }
    }
  }
  return 0;
}
