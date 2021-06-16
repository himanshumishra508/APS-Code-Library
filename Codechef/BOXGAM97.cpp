#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t,n,k,p,i,a;
  cin>>t;
  while(t--)
  {
    vector<ll>v,v1;
    cin>>n>>k>>p;
    for(i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    if(k%2!=0 && p==0)
    cout<<*max_element(v.begin(),v.end())<<endl;

    else if(k%2!=0 && p==1)
    cout<<*min_element(v.begin(),v.end())<<endl;

    else
    {
      if(p==0)
      {
        for(i=0;i<n;i++)
        {
          if(i==0)
          v1.push_back(v[i+1]);

          else if(i==n-1)
          v1.push_back(v[i-1]);

          else
          {
            a=min(v[i-1],v[i+1]);
            v1.push_back(a);
          }

        }
        cout<<*max_element(v1.begin(),v1.end())<<endl;
      }

      else
      {
        for(i=0;i<n;i++)
        {
          if(i==0)
          v1.push_back(v[i+1]);

          else if(i==n-1)
          v1.push_back(v[i-1]);

          else
          {
            a=max(v[i-1],v[i+1]);
            v1.push_back(a);
          }

        }
        cout<<*min_element(v1.begin(),v1.end())<<endl;
      }
    }
  }
  return 0;
}
