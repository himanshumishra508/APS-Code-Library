t=int(input())
while t:
    t-=1
    n,m = map(int,input().split())
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))
    beg = [-2]*n
    end = [-2]*n
    for i in range(n):
        if A[i]==1:
            beg[i]=0
    beg[0]=0
    for i in range(1,n):
        if beg[i]==-2:
            if i!=1:
                if beg[i-1]==-1:
                    beg[i]=-1
                else:
                    beg[i]=beg[i-1]+1
            else:
                if A[0]==1:
                    beg[i]=1
                else:
                    beg[i]=-1
    for i in range(n):
        if A[i]==2:
            end[i]=0
    end[0]=0
    if A[n-1]==0:
        end[n-1]=-1
    else:
        if A[n-1]!=1:
            end[n-1]=0
        else:
            end[n-1]=-1

    for i in reversed(range(n-1)):
        if end[i]==-2:
            if end[i+1]==-1:
                end[i]=-1
            else:
                end[i]=end[i+1]+1

    for i in range(n):
        if A[i]==2:
            beg[i]=0

    for i in range(n):
        if A[i]==1:
            end[i]==0             
    
    ans = [-2]*n

    for i in range(n):
        if A[i]!=0:
            ans[i]=0

    for i in range(n):
        if ans[i]==-2:
            if beg[i]==-1 and end[i]==-1:
                ans[i]=-1
            elif beg[i]!=-1 and end[i]==-1:
                ans[i]=beg[i]
            elif beg[i]==-1 and end[i]!=-1:
                ans[i]=end[i]
            else:
                ans[i]=min(beg[i],end[i])
    
    for i in range(m):
        print(ans[B[i]-1],end=" ")
    #print("\n")