#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countDigit(ll n)
{
    ll count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    string str;
    char ch;
    ll freq=0,digit=0,i;
    cin>>str;
    ch=str[0];
    freq=1;
    for(i=1;str[i]!='\0';i++)
    {
      if(str[i]!=ch)
      {
        digit=digit+countDigit(freq)+1;
        ch=str[i];
        freq=1;

      }
      else
      {
        freq++;
      }
    }
    digit=digit+countDigit(freq)+1;

    if(digit < str.size())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
  }
}
