#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
     int n,m,x;
     cin>>n>>m>>x;
     int row = (x-1)%n;
     int col = (x-1)/n;
     //cout<<row<<" "<<col<<endl;;
     int ans = ((m*row))+col;
     cout<<ans+1<<endl;
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
