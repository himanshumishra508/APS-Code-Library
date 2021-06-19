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
    string s;
    ll k,x,i,arr[26]={0},ans=0,flag=0;
    cin>>s;
    cin>>k>>x;
    for(i=0;s[i]!='\0';i++)
    {
      //cout<<s[i];
      if(arr[s[i]-'a']+1<=x)
      {
        ans++;
        arr[s[i]-'a']++;
      }
      else
      {
        if(k>0)
        k--;

        else
        break;

      }


    }
    cout<<ans<<endl;
  }
  return 0;
}
