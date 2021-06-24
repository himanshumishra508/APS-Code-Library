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
    ll n,i,s=-1,a,m,sum=0,flag=0,l=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
      cin>>a;
      if(s==-1)
      {
        if(a>0)
        s=1;
        else if(a<0)
        s=0;

        m=a;
        //flag=;
      }

      else
      {
        if(a>0 && s==1)
        {
          if(a>m)
          m=a;
        }
        else if(a<0 && s==0)
        {
          if(a>m)
          m=a;
        }
        else if(a>0 && s==0)
        {
          sum=sum+m;
          l=m;
          s=1;
          m=a;
        }
        else if(a<0 && s==1)
        {
          sum=sum+m;
          l=m;
          s=0;
          m=a;
        }
      }
    }
    if(m!=l)
    sum=sum+m;

    cout<<sum<<endl;

  }
  return 0;
}
