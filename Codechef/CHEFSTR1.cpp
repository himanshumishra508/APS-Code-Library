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
      ll n,prev,a,ans=0;
      cin>>n;
      cin>>prev;
      n--;
      while(n--)
      {
          cin>>a;
          if(a!=prev)
          ans=ans+abs(prev-a)-1;
          
          prev=a;
      }
      cout<<ans<<endl;
  }
  return 0;
}



