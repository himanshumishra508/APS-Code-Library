#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,p,i,j,a,b;
    scanf("%lld",&t);
    while(t--)
    {
    
        scanf("%lld",&n);
        scanf("%lld",&p);
        long long int d[n];
        
        for(i=0;i<n;i++)
        scanf("%lld",&d[i]);
        
        int flag=0;
        long long int a;
        
        for(i=0;i<n;i++)
        {
            if(p%d[i]!=0)
            {
                a=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("YES ");
            for(i=0;i<n;i++)
            {
                if(i==a)
                {
                    printf("%lld ",(p/d[i])+1);
                }
                else
                cout<<0<<" ";
            }
            printf("\n");
        }
        else
        {
            flag=0;
            for(i=1;i<n;i++)
            {
                for(j=0;j<i;j++)
                {
                    if(d[j]!=1 && d[i]%d[j]!=0)
                    {
                        a=j;
                        b=i;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                break;
            }
            if(flag==0)
            printf("NO\n");
            else
            {
                printf("YES ");
                for(i=0;i<n;i++)
                {
                    if(i==a)
                    {
                        printf("%lld ",((p-d[b])/d[a])+1);
                    }
                    else if(i==b)
                    printf("1 ");
                    else
                    printf("0 ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}