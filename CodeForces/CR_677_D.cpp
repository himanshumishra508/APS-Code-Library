#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,fi,a,se,i;
  int arr[50005]={0};
  set <int> s;
  cin>>n;
  cin>>a;
  fi=a;
  for(i=2;i<=n;i++)
  {
    cin>>a;
    if(a==fi)
    {
      s.insert(i);
      arr[i]=1;
    }

    if(a!=fi)
    se=i;
  }
  if(s.size()==n-1)
  cout<<"NO\n";
  else
  {
    cout<<"YES\n";
    for(i=2;i<=n;i++)
    {
      if(arr[i]!=1)
      cout<<"1 "<<i<<endl;
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
      cout<<*it<<" "<<se<<endl;
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
