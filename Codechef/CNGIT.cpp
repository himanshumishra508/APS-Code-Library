#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll freq[105]={0},a,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      freq[a]=freq[a]+1;
    }
    cout<<n-*max_element(freq,freq+105)<<endl;;
  }
  return 0;
}
