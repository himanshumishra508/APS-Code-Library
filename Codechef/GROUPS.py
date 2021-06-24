t=int(input())
while t:
    t-=1
    ans = 0
    flag = False
    s=input()
    for i in s:
        if(i=='1' and flag==False):
            ans+=1;
            flag = True
        elif(i=='0' and flag==True):
            flag = False
    
    print(ans)
            