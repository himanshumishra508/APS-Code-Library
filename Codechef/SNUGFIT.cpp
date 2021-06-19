#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[n],b[n];

        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            scanf("%lld",&b[j]);
        }
        sort(a,a+n);
        sort(b,b+n);
        for(j=0;j<n;j++)
        {
            if(a[j]<b[j])
            {

            }
            else
            a[j]=b[j];
        }
        long long int sum=0;
        for(j=0;j<n;j++)
        sum=sum+a[j];

        printf("%lld\n",sum);
    }
    return 0;
}
