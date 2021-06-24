#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool digcheck(int n, int d)
{
  while(n>0)
  {
    if(n%10==d)
    return true;
    n=n/10;
  }
  return false;
}

void solve()
{
  int q,d,a,i,j,k;
  bool ans,loop;
  cin>>q>>d;
  for(i=0;i<q;i++)
  {
    cin>>a;
    ans=digcheck(a,d);
    if(ans)
    cout<<"YES\n";
    else
    {
      loop=false;
      j=a/d;
      k=a%d;
      while(j)
      {
        a=a-d;
        loop=digcheck(a,d);
        if(loop)
        break;
        j--;
        k+=d;
      }
      if(loop)
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }

  }
}

int32_t main()
{
  io;
  int t;
  t=1;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
