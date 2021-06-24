#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int countsetbits(int n)
{
    int count=0;
    while (n)
    {   
        count+= n & 1;
        n>>=1;
    }
    return count;
}

void solve()
{
  int n,a,answer=0;
  cin>>n;
  while(n--)
  {
      cin>>a;
      answer+=countsetbits(a);
  }
  cout<<answer<<endl;
}

int32_t main()
{
 
    //  #ifndef ONLINE_JUDGE
    //      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    //  #endif
 
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