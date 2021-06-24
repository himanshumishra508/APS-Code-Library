t=int(input())
while t:
    t-=1 
    x,y,k,n=map(int,input().split(' '))
    a=abs(x-y)
    if (a%k==0 and (a//k)%2==0):
        print('Yes')
    else:
        print('No')