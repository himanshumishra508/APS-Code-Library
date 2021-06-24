#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        string b;
        double p=0,a=0;
        cin>>n;
        cin>>b;
        for(i=0;i<n;i++)
        {
            if(b[i]=='1')
            p=p+1;
            else
            a=a+1;
        }
        p=p+(120-n);
        double att=(double)(p/120)*100.0;
        //cout<<att<<endl;
        if(att>=75.0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
 



