#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    string a,b,x,y;
    ll i,j,k,num1,num2,base;
    char ch;
    set <ll> s;
    cin>>a>>b;
    for(i=0;a[i]!='\0';i++)
    {
      for(j=0;b[j]!='\0';j++)
      {
        x=a;
        y=b;
        ch=x[i];
        x[i]=y[j];
        y[j]=ch;
        base=1;
        num1=0;
        for(k=x.size()-1;k>=0;k--)
        {
          num1=num1+(x[k]-'0')*base;
          base=base*10;
        }
        base=1;
        num2=0;
        for(k=y.size()-1;k>=0;k--)
        {
          num2=num2+(y[k]-'0')*base;
          base=base*10;
        }
        num1=num1+num2;
        s.insert(num1);
      }
    }
    auto it =s.end();
    it--;
    cout<<*it<<endl;

  }
  return 0;
}
