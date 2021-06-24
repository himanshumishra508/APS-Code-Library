#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i,a,j;
  cin>>n;
  vector<int> v;
  for(i=0;i<n;i++)
  {
    cin>>a;
    v.pb(a);
  }
  i=0;
  j=n-1;
  while(i<=j)
  {
    if(i==j)
    cout<<v[i]<<" ";
    else
    cout<<v[i]<<" "<<v[j]<<" ";
    i++;
    j--;
  }
  cout<<endl;
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
