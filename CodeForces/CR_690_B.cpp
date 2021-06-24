#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n;
  string s;
  cin>>n;
  cin>>s;
  if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
  cout<<"YES\n";
  else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
  cout<<"YES\n";
  else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')
  cout<<"YES\n";
  else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
  cout<<"YES\n";
  else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
  cout<<"YES\n";
  else
  cout<<"NO\n";
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
