#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int s,p,i;
  cin>>s>>p;
  set <int> div;
  bool ans=false;
  for ( i=1; i<=sqrt(p); i++)
    {
        if (p%i == 0)
        {
            // If divisors are equal, print only one
            if (p/i == i)
            {
              //printf("%d ", i);
              div.insert(i);
            }


            else // Otherwise print both
            {
              //printf("%d %d ", i, n/i);
              div.insert(i);
              div.insert(p/i);
            }

        }
    }
    for(auto it=div.begin();it!=div.end();it++)
    {
      int a=*it;
      if(a<s)
      {
        int b=s-a;

        if(div.find(b)!=div.end())
        {
          ans=true;

        }
      }
      if(ans)
      break;
    }
    if(ans)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}

int32_t main()
{
  io;
  int t;
  t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
