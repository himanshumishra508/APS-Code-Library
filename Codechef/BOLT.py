t=int(input())
while t:
    t-=1
    k1,k2,k3,v = map(float,input().split())
    a = k1*k2*k3*v
    a=round(100/a,2)
    if a<9.58:
        print('YES')
    else:
        print('NO')