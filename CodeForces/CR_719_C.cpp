#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
  int n,i,count;
  cin>>n;
  if(n==1)
  cout<<1<<endl;
  else if(n==2)
  cout<<-1<<endl;
  else
  {
    i=1;
    count=0;
    while(i<=(n*n))
    {
      cout<<i<<" ";
      count++;
      if(count==n)
      {
        cout<<endl;
        count=0;
      }
      
      i+=2;
    }
    i=2;
    while(i<=(n*n))
    {
      cout<<i<<" ";
      count++;
      if(count==n)
      {
        cout<<endl;
        count=0;
      }
      
      i+=2;
    }
  }
  
  
}

int32_t main()
{
 
     #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
     #endif
 
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