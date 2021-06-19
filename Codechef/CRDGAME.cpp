#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll dig_sum(ll x)
{
    ll sum=0;
    while(x!=0)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    return sum;
}

int main()
{
  io;
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,a,b,chef=0,morty=0;
      cin>>n;
      while(n--)
      {
          cin>>a>>b;
          a=dig_sum(a);
          b=dig_sum(b);
          
          if(a>b)
          chef++;
          else if(b>a)
          morty++;
          else
          {
              chef++;
              morty++;
          }
      }
      if(chef>morty)
      cout<<"0 "<<chef<<endl;
      else if(morty>chef)
      cout<<"1 "<<morty<<endl;
      else
      cout<<"2 "<<chef<<endl;
    }
  return 0;
}



