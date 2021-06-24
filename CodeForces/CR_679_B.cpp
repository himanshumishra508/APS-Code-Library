#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,m,i,j,a;
  cin>>n>>m;
  int size=(n*m)+2;
  int index[size];
  for(i=0;i<size;i++)
  index[i]=-1;

  int arr1[n][m];
  // int arr2[m][n];
  // int ans[n][m];
  vector <int> v;
  bool b=false;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin>>a;
      arr1[i][j]=a;
      if(j==0)
      index[a]=i;
    }
  }
  for(j=0;j<m;j++)
  {
    for(i=0;i<n;i++)
    {
      cin>>a;
      if(index[a]!=-1)
      {
        b=true;
        v.pb(index[a]);
      }
      else if(b)
      {
        v.pb(index[a]);
      }

    }
    if(b)
    b=false;
  }
  // cout<<v.size()<<endl;
  // for(i=0;i<size;i++)
  // cout<<index[i]<<" ";
  //
  // cout<<endl;
  for(i=0;i<v.size();i++)
  {
    for(j=0;j<m;j++)
    {
      cout<<arr1[v[i]][j]<<" ";
    }
    cout<<endl;
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
