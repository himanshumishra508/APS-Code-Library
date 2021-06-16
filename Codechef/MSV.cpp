#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test,n,arr[1000005],i,j,k,x;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        vector<long long int> v[1000005];
        long long int f[1000005]={0};

        for(j=0;j<n;j++)
        {
            x=arr[j];
            if(v[x].empty())
            {
                for(k=1;k<=sqrt(x);k++)
                {
                    if(x%k==0)
                    {
                        if(x/k==k)
                        {
                            v[x].push_back(k);
                            f[k]-=-1;
                        }

                        else
                        {
                            v[x].push_back(k);
                            v[x].push_back(x/k);
                            f[k]-=-1;
                            f[x/k]-=-1;
                        }
                    }
                }
            }

            else
            {
                for(k=0;k<v[x].size();k++)
                {
                    f[v[x][k]]-=-1;
                }
            }
        }


            long long int ans=0;
            for(j=n-1;j>=0;j--)
            {
                x=arr[j];
                for(k=0;k<v[x].size();k++)
                {
                    f[v[x][k]]=f[v[x][k]]-1;
                }
                if(f[x]>ans)
                ans=f[x];
            }
            cout<<ans<<endl;



    }
    return 0;
}
