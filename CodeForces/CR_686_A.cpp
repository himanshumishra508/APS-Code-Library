#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n;
  cin>>n;
  vector <int> v;
  int a=n;
  while(n!=0)
  {
    v.pb(n);
    n--;
  }
  if(a%2)
  {
    swap(v[a/2],v[a-1]);
  }
  for(auto it=v.begin();it!=v.end();it++)
  {
    cout<<*it<<" ";
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
