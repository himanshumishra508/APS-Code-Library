#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int i,one=0,zero=0;
	    if((s.size())%2)
	    cout<<"-1\n";
	    else
	    {
	        for(i=0;i<s.size();i++)
	        {
	            if(s[i]=='1')
	            one++;
	            else
	            zero++;
	        }
	        if(one==s.size() || zero==s.size())
	        cout<<"-1\n";
	        else
	        {
	            cout<<abs(one-zero)/2<<endl;
	        }
	    }
	}
	return 0;
}
