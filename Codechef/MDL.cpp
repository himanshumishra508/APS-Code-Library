#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t,n,i,a;
  cin>>t;
  while(t--)
  {
    vector <ll> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
    auto it=max_element(v.begin(),v.end());
    auto itr=min_element(v.begin(),v.end());

    if(it>itr)
    cout<<*itr<<" "<<*it<<endl;
    else
    cout<<*it<<" "<<*itr<<endl;

    v.clear();
  }
  return 0;
}
