#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    int a[n],j,k=INT_MAX;
	    for(j=0;j<n;j++)cin>>a[j];
	    for(j=0;j<n;j++)
	    {
	        k=min(k,a[j]);
	    }
	    cout<<k<<endl;
	}
	
	return 0;
}
