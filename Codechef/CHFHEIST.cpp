#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
    int D,d,P,Q;
    cin>>D>>d>>P>>Q;
    int n,money=0;
    n=D/d;
    n=(2*P +(n-1)*Q)*n;
    n=n/2;
    money+=(n*d);
    if(D%d!=0)
    {
        n=D-(D/d)*d;
        int i = (D/d)+1;
        i=P+(i-1)*Q;
        i=i*n;
        money+=i;
    }
    cout<<money<<endl;
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