#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    long int test,N,M,Q,x,y,i,j;
    scanf("%ld",&test);
    for(i=0;i<test;i++)
    {
        long int row[100005];
        long int column[100005];
        long int rowo=0,rowe=0,columno=0,columne=0;
        
        memset(row, 0, 100005*sizeof(row[0])); 
        memset(column, 0, 100005*sizeof(column[0])); 
        
        scanf("%ld%ld%ld",&N,&M,&Q);
        
        
        
        for(j=0;j<Q;j++)
        {
            scanf("%ld%ld",&x,&y);
            row[x]=row[x]+1;;
            column[y]=column[y]+1;
        }
        for(j=1;j<=N;j++)
        {
            if(row[j]%2==0)
            rowe++;
            else
            rowo++;
        }
        for(j=1;j<=M;j++)
        {
            if(column[j]%2==0)
            columne++;
            else
            columno++;
        }
        //printf("%ld %ld\n",rowo,columno);
        //printf("%ld %ld\n",rowe,columne);
        
        long int ans=N*M;
        ans=ans-((rowo*columno)+(rowe*columne));
        printf("%ld\n",ans);
    }
    return 0;
}