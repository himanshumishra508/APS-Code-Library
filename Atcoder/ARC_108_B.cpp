#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n,ans=0,i;
  string s;
  stack <char> st;
  cin>>n;
  cin>>s;
  for(i=0;s[i]!='\0';i++)
  {
    //if(s[i]=='f' || s[i]=='o' || s[i]=='x')
    {
      st.push(s[i]);
    }
    if(!st.empty())
    {
      if(st.top()=='x')
      {
        st.pop();
        if(!st.empty())
        {
          if(st.top()=='o')
          {
            st.pop();
            if(!st.empty())
            {
              if(st.top()=='f')
              {
                st.pop();
                ans++;
              }
              else
              st.push('o');
            }
          }
          else
          st.push('x');
        }

      }
    }

  }
  cout<<n-(3*ans)<<endl;

}

int32_t main()
{
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
