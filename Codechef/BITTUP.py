def power(x, y, p) :
    res = 1     
    x = x % p
     
    if (x == 0) :
        return 0
 
    while (y > 0) :
        if ((y & 1) == 1) :
            res = (res * x) % p
 
        y = y >> 1     
        x = (x * x) % p
         
    return res

t=int(input())
while t:
    t-=1
    n,m = map(int,input().split())
    mod=1000000007
    ans = power(2,n,mod)
    ans-=1
    ans = power(ans,m,mod)
    print(ans)