#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
    int n,k,a,b,city=0;
    cin>>n>>k;
    map <int,int> m;
    while(n--)
    {
        cin>>a>>b;
        m[a]+=b;
    }
    city+=k;
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(city>=(it->first))
        {
            city+=it->second;
        }
    }
    cout<<city<<endl;
}

int32_t main()
{
 
/*     #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
     #endif
*/ 
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