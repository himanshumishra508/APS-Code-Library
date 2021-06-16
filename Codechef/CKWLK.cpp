#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t,i;
  cin>>t;
  while(t--)
  {
    int flag=0;
    ll cnt=0,j=0,n=0,a;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]!='0')
      {
        flag=1;
        break;
      }
      else
      cnt++;
    }
    //cout<<i<<endl;
    for(i;s[i]!='\0';i++)
    {
      a=s[i]-48;
      
      n=n+a*(pow(10,j));
      //cout<<n<<endl;
      j++;
    }
    //cout<<n<<endl;
    if(ceil(log2(n)) == floor(log2(n)))
    {
      a=ceil(log2(n));
      if(cnt>=a)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;
    }
    else
    cout<<"No"<<endl;
  }
  return 0;
}