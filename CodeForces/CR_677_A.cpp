#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  string s;
  int ans=0,num;
  cin>>s;
  num=s[0]-'0';
  ans=ans + 10*(num-1);
  num=s.size();
  while(num>0)
  {
    ans+=num;
    num--;
  }
  cout<<ans<<endl;
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
