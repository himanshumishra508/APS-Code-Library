#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
  io;
  ll t;
  cin>>t;
  while(t--)
  {
    ll k,i,j,x;
    cin>>k;
    x=k;
    for(i=0;i<8;i++)
    {
      for(j=0;j<8;j++)
      {
        if(k==x)
        {
          cout<<"O";
          k--;
        }
        else if(k>0)
        {
          cout<<".";
          k--;
        }
        else
        cout<<"X";

      }
      cout<<endl;
    }
    cout<<endl;
  }
  return 0;
}
