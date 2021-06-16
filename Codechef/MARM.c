#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    long long int test,n,k,arr[10005],temp,a,b,i,j;
    scanf("%lld",&test);
    for(i=0;i<test;i++)
    {
        scanf("%lld%lld",&n,&k);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&arr[j]);
        }
        temp=k%(3*n);
        for(j=0;j<temp;j++)
        {
            a=j%n;
            b=n-1-a;
            arr[a]=arr[a]^arr[b];
        }
        
        if(k>=(3*n) && n%2!=0)
        arr[n/2]=0;
        
        for(j=0;j<n;j++)
        printf("%lld ",arr[j]);
        
        printf("\n");
        
    }
    return 0;
}