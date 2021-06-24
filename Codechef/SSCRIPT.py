t=int(input())
while t:
    t-=1
    n,k=map(int,input().split())
    s=input()
    count=0
    ans=False
    for i in s:
        if i=='*':
            count+=1
        else:
            count=0
        if count==k:
            ans=True
    if ans:
        print('YES')
    else:
        print('NO')