#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int count_same_digit(int L, int R)
{
    int tmp = 0, ans = 0;

    int n = log10(R) + 1;
  
    for (int i = 0; i < n; i++) {

        tmp = tmp * 10 + 1;

        for (int j = 1; j <= 9; j++) {
  
            if (L <= (tmp * j)
                && (tmp * j) <= R) {
 
                ans++;
            }
        }
    }
    return ans;
}


void solve()
{
  int n;
  cin>>n;
  cout<<count_same_digit(1,n)<<endl;;
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