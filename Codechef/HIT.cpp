#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t,n,i,a;
  cin>>t;
  while(t--)
  {
    vector<ll>v;
    ll b,c,d;
    int flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    a=(v.size())/4;
    n=a-1;

            b=n+1;
          c=n+a+1;
          d=n+a+a+1;

      if(v[b-1]==v[b] || v[c-1]==v[c] || v[d-1]==v[d])
      flag=1;

      if(flag==1)
      cout<<-1<<endl;

      else
      {

          cout<<v[b]<<" "<<v[c]<<" "<<v[d]<<endl;
      }



  }
  return 0;
}
