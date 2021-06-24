#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
  int l,i;
  float cnt=0.0;
  string s;
  cin>>l;
  cin>>s;
  bool ans=false;
  for(i=0;i<l;i++)
  {
    if(s[i]=='1')
    cnt+=1.0;

    // per = (cnt/(i+1))*100;
    // cout<<per<<endl;

    if(cnt/(i+1)>=.5)
    {
      ans=true;
      break;
    }
    

  }
  if(ans)
  cout<<"YES\n";
  else
  cout<<"NO\n";
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