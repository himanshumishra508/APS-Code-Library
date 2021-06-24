#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



void solve()
{
  vector <int> three,five;
  int num=1e18;
  int i=1,a,j;
  while(i<num)
  {
    i=i*3;
    three.pb(i);
  }
  i=1;
  while(i<num)
  {
    i=i*5;
    five.pb(i);
  }
  int n;
  cin>>n;
  //set <int> s;
  bool b=false;
  int ans3,ans5;
  int th=three.size();
  int fi=five.size();
  for(i=0;i<th;i++)
  {
    for(j=0;j<fi;j++)
    {
      a=three[i]+five[j];
      if(a==n)
      {
        b=true;
        ans3=i;
        ans5=j;
      }
    }
  }

  if(b)
  {
    cout<<ans3+1<<" "<<ans5+1;
  }
  else
  cout<<-1;
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
