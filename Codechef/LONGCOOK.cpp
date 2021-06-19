#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll dayofweek(ll d, ll m, ll y)
{
    static ll t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}



int main()
{
  io;
  ll t;
  cin>>t;
  while(t--)
  {
    ll m1,m2,y1,y2,i=0,j,ans=0,flag=0,cnt,d,k;
    cin>>m1>>y1;
    cin>>m2>>y2;
    if(m1<=2)
    y1=y1;
    else
    y1=y1+1;
    if(m2==1)
    y2=y2-1;
    else
    y2=y2;

    k=(y2-y1)+1;
    if((k/400)<0)
    {
      for(y1;y1<=y2;y1++)
      {
        d=dayofweek(1,2,y1);
        if(d==6)
        ans++;
        else if(d==0)
        {
          if(!((y1%400==0) || (y1%4==0 && y1%100!=0)))
          ans++;
        }
      }
    }
    else
    {
      cnt=k/400;
      ans=ans+(cnt*101);
      y1=y1+(cnt*400);
      for(y1;y1<=y2;y1++)
      {
        for(y1;y1<=y2;y1++)
        {
          d=dayofweek(1,2,y1);
          if(d==6)
          ans++;
          else if(d==0)
          {
            if(!((y1%400==0) || (y1%4==0 && y1%100!=0)))
            ans++;
          }
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}