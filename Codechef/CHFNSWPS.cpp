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
    ll n,i,a,c,val,ans=0,ans2=0,mini,cnt,ans3=0,x,ans4=0,y;
    int flag=0;
    map <ll,ll> m,m1,m2;
    vector <ll> v1,v2;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      m1[a]++;
      m[a]++;
    }
    // cout<<m.size()<<" "<<m1.size();
    for(i=0;i<n;i++)
    {
      cin>>a;
      m2[a]++;
      m[a]++;
    }
    // cout<<m.size()<<" "<<m2.size();
    for(auto it=m.begin();it!=m.end();it++)
    {
      if((it->second)%2!=0)
      {
        flag=1;
      }
    }
    // cout<<"f "<<flag<<endl;
    if(flag==1)
    cout<<-1<<endl;

    else
    {
      for(auto it= m.begin();it!=m.end();it++)
      {
        auto it2=m1.find(it->first);
        if(it2!=m1.end())
        {
          if((it2->second)<((it->second)/2))
          {
            c=((it->second)/2)-(it2->second);
            while(c--)
            {
              v2.pb(it->first);
            }

          }
          else if((it2->second)>((it->second)/2))
          {
            c=(it2->second)-((it->second)/2);
            while(c--)
            {
              v1.pb(it->first);
            }

          }

          flag=1;
        }
        if(flag==0)
        {
          c=(it->second)/2;
          while(c--)
          {
            v2.pb(it->first);
          }
        }
        flag=0;
      }
      sort(v1.begin(),v1.end());
      // cout<<v1.size()<<endl;
      // cout<<v2.size()<<endl;
      sort(v2.begin(),v2.end());
      n=v1.size();

      mini=m.begin()->first;
      // cout<<"m "<<mini<<endl;
      // if(n!=0)
      // {
      //   cnt=n;
      //   if(mini==v1[0])
      //   {
      //     cnt=count(v1.begin(),v1.end(),mini);
      //     ans2=ans2+cnt;
      //     cnt=n-cnt;
      //   }
      //   else if(mini==v2[0])
      //   {
      //     cnt=count(v2.begin(),v2.end(),mini);
      //     ans2=ans2+cnt;
      //     cnt=n-cnt;
      //   }
      //   ans2=ans2+(2*cnt*(mini));
      // }

      // cout<<"a2 "<<ans2<<endl;
      // for(i=0;i<n;i++)
      // {
      //   ans=ans+min(v1[i],v2[i]);
      // }
      y=2*mini;
      for(i=0;i<n;i++)
      {
        x=min(v1[i],v2[i]);
        ans4=ans4+min(x,y);
      }
      // cout<<"a "<<ans<<endl;
      // sort(v2.begin(),v2.end(),greater<ll>());
      // for(i=0;i<n;i++)
      // {
      //   ans3=ans3+min(v1[i],v2[i]);
      // }
      cout<<ans4<<endl;
    }
  }
  return 0;
}



// 22
// 2 2 2 2 2 2 2 2 2 2 2 2 6 6 6 81  81  9 17 14 10 10
// 1 1 1 1 1 1 1 1 1 1 1 1 6 7 7 11 11 15 15 17 14 9
// 6
// 1 1 2 2 3 3
// 4 4 5 5 6 6
// 5
// 1 2 3 4 5
// 2 3 4 1 5
// 1
// 1
// 2
// 2
// 1 2
// 2 1
// 2
// 1 1
// 2 2
// 4
// 1 2 2 5
// 1 3 3 5
// 9
// 1 2 3 4 4 5 5 8 9
// 10 10 0 0 1 2 3 8 9
// 9
// 3 1 2 2 3 3 4 6 6
// 7 4 2 2 3 1 7 8 8
// 7
// 2 2 100 105 105 98 98
// 2 2 100 100 100 1 1
// 10
// 6 6 6 6 6 6 7 7 9 9     //Swap with lower_bound
// 3 3 4 4 5 5 8 8 10 10
