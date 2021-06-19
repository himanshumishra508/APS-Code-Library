#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test,n,t,i,j,k,l,x,totans=0;
    char m;
    scanf("%lld",&test);
    while(test--)
    {
        long long int arr[4][4]={0},ans,a[4],rupees,temp[24],b=0;
        
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            cin>>m;
            scanf("%lld",&t);
            arr[t%4][m-'A']++;
        }
        
        for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
      {
        if(i!=j)
        {
          for(k=0;k<4;k++)
          {
            if(k!=i && k!=j)
            {
              for(l=0;l<4;l++)
              {
                if(l!=i && l!=j && l!=k)
                {
                
                  a[0]=arr[0][i]; a[1]=arr[1][j]; a[2]=arr[2][k]; a[3]=arr[3][l];
                  sort(a,a+4);
                  ans=0;
                  rupees=0;
                  for(x=0;x<4;x++)
                  { 
                      rupees=rupees+25;
                      if(a[x]==0)
                      ans=ans-100;
                      else
                      ans=ans+(a[x]*rupees);
                  }
                  temp[b++]=ans;
                  
                  
                }
              }
            }
          }
        }
      }
    }
    ans=INT_MIN;
    for(i=0;i<24;i++)
    {
        if(ans<temp[i])
        ans=temp[i];
    }
    
    printf("%lld\n",ans);
    totans=totans+ans;
    }
    printf("%lld",totans);
    return 0;
}