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
    ll sum=0,a,i,p;
    for(i=0;i<5;i++)
    {
      cin>>a;
      sum=sum+a;
    }
    cin>>p;
    sum=sum*p;
    if(sum<=24*5)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
  }
  return 0;
}
