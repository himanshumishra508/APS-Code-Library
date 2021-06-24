#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


bool isPrime(int n)
{

    if (n <= 1)  return false;
    if (n <= 3)  return true;

 
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}


int nextPrime(int N)
{

  
    if (N <= 1)
        return 2;

    int prime = N;
    bool found = false;

   
    while (!found) {
        prime++;

        if (isPrime(prime))
            found = true;
    }

    return prime;
}



void solve()
{
  int n,i,j,c;
  cin>>n;
  int a=(n-1);
  int e=(n-1);
  bool b=true;
  // cout<<a<<endl;
  // cout<<nextPrime(3);
  while(b)
  {
    c=nextPrime(a);
    //cout<<c<<endl;
    if(!isPrime(c-e))
    {
      b=false;
      c=c-e;
    }

    else
    {
      a=c;
    }
  }
  // if(n==2)
  // c=1;

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
      cout<<c<<" ";
      else
      cout<<1<<" ";
    }
    cout<<endl;
  }
  //cout<<endl;
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
