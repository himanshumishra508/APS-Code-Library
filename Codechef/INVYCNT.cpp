#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long

int main()
{

    ll t,n,k,a,i,j,t1,t2;
    cin>>t ;
    while(t--)
    {
        ll sum=0;
        cin>>n>>k;
        vector<ll> v;

        for(i=0 ; i<n; i++ )
        {
            cin>> a;
            v.push_back(a);
        }

        t1=(k*(k+1))/2;
        t2=((k-1)*(k))/2;

        for(i=0; i<n-1 ;i++)
        {
            for(j=i+1 ; j<n; j++)
            {
                if(v[i]!=v[j])
                {
                    if(v[i]>v[j])
                    {
                        sum=sum+t1;
                    }
                    else
                    {
                        sum=sum+t2;
                    }
                }
            }
        }
        cout <<sum<<endl;
    }
    return 0;
}
