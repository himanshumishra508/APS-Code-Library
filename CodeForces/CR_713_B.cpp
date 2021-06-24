#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,i,r1,r2,c1,c2,j;
  cin>>n;
  char arr[n][n];
  char ch;
  bool flag=false;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>arr[i][j];
      if(arr[i][j]=='*' && !flag)
      {
        r1=i;
        c1=j;
        flag=true;
      }
      else if(arr[i][j]=='*' && flag)
      {
        r2=i;
        c2=j;
      } 
    }
  }
  if(r1==r2 || c1==c2)
  {
    if(r1==r2 && r2==n-1)
    {
      arr[r1-1][c1]='*';
      arr[r2-1][c2]='*';
    }
    else if(c1==c2 && c2==n-1)
    {
      arr[r1][c1-1]='*';
      arr[r2][c2-1]='*';
    }
    else if(r1==r2 && r2==0)
    {
      arr[r1+1][c1]='*';
      arr[r2+1][c2]='*';
    }
    else if(c1==c2 && c2==0)
    {
      arr[r1][c1+1]='*';
      arr[r2][c2+1]='*';
    }
    else
    {
      if(r1==r2)
      {
        arr[r1+1][c1]='*';
      arr[r2+1][c2]='*';
      }
      if(c1==c2)
      {
        arr[r1][c1+1]='*';
      arr[r2][c2+1]='*';
      }
      
    }
    
  }
  else
  {
    arr[r1][c2]='*';
    arr[r2][c1]='*';
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<arr[i][j];
    }
    cout<<endl;
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