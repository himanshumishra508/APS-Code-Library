#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
    int n,i,a,b;
    map <int,int> m;
    priority_queue<int> q;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      m[a]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
      q.push(it->second);
    }
    //cout<<q.size()<<endl;
    while(q.size()>=2)
    {
       a=q.top();
       q.pop();
       b=q.top();
       q.pop();
       a--;
       b--;
       if(a)
       q.push(a);
       if(b)
       q.push(b);
    }
    q.size()==0 ? cout<<"0\n" : cout<<q.top()<<endl;
    
}


int32_t main()
{
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
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