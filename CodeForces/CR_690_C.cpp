#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int x,sum=0,temp=9,rem;
  bool ans=true;
  cin>>x;
  rem=x;
  string s="";

  while(sum<=x)
  {
      //cout<<"1";
    if(temp==0 && rem>0)
    {
      ans=false;
      break;
    }

    else if(rem<=temp)
    {
        s+=to_string(rem);
        break;
    }

    else
    {
      sum+=temp;
      s+=to_string(temp);

      rem-=temp;
      temp--;
    }
  }
  reverse(s.begin(),s.end());
  if(ans)
  cout<<s<<endl;
  else
  cout<<"-1\n";
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
