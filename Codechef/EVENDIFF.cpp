#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i,a;
  int even=0, odd=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a;
    if(a%2)
    odd++;
    else
    even++;
  }
  cout<<min(odd,even)<<endl;
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
