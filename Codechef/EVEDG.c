#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    long long int test,n,m,u,v,i,j;
    scanf("%lld",&test);
    
    for(i=0;i<test;i++)
    {
        long long int f[100004]={0};
        long long int cnt=0;
        //memset(f, 0, 100004*sizeof(f[0])); 
        
        scanf("%lld%lld",&n,&m);
        for(j=0;j<m;j++)
        {
            scanf("%lld%lld",&u,&v);
            f[u]=f[u]+1;
            f[v]=f[v]+1;
        }
        
        if(m%2==0)
        {
            printf("1\n");
            for(j=0;j<n;j++)
            {
                printf("1 ");
            }
            printf("\n");
            
        }
        
        else
        {
            
            long long int flag=0;
            
            for(j=1;j<=n;j++)
            {
                if(f[j]%2!=0)
                {
                    flag=1;
                    break;
                }
                
            }
            
            if(flag==0)
            {
                cnt=2;
                printf("3\n");
                for(j=1;j<=n;j++)
                {
                    if(j==u || j==v)
                    {
                        printf("%lld ",cnt);
                        cnt--;
                    }
                    
                    else
                    printf("3 ");
                    
                    
                }
                printf("\n");
            }
            
            else
            {
                flag=0;
                printf("2\n");
                for(j=1;j<=n;j++)
                {
                    if(f[j]%2!=0 && flag==0)
                    {
                        printf("1 ");
                        flag=1;
                    }
                    else
                    printf("2 ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}