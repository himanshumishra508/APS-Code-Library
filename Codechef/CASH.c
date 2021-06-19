#include<stdio.h>

int main()
{
    long long int t,n,k,i,j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&n,&k);
        long long int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        j=0;
        long long int answer=0;
        while(j<n)
        {
            answer=answer+a[j];
            j++;
        }
        answer=answer%k;
        printf("%lld\n",answer);
    }
    return 0;
}