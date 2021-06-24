def power(a,b,mod):
    res=1
    a=a%mod
    
    while b:
        if b & 1:
            res=(res*a)%mod
        
        b>>=1
        a=(a*a)%mod
    return res

t=int(input())
while t:
    t-=1
    n=int(input())
    mod=1000000007
    print(power(2,n-1,mod))
