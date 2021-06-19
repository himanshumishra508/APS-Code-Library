#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll N,a,b,c,f,af,i,tf,min=0,ans;
    vector <ll> v;
    cin>>N>>a>>b>>c;
    cin>>f;
    tf=abs(b-f);
    af=abs(a-f);
    min=tf+af;


    for(i=1;i<N;i++)
    {
      cin>>f;
      tf=abs(b-f);
      af=abs(a-f);

      if(min>(af+tf))
      min=af+tf;
    }

    cout<<min+c<<endl;
  }
  return 0;
}
