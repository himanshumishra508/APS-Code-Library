t=int(input())
while t:
    t-=1
    n,a,b=map(int,input().split())
    sar=0
    anu=0
    while n:
        n-=1
        s=input()
        if('E'==s[0] or 'Q'==s[0] or 'U'==s[0] or 'I'==s[0] or 'N'==s[0] or 'O'==s[0] or 'X'==s[0]):
            sar+=a
        else:
            anu+=b
    if(sar>anu):
        print('SARTHAK')
    elif(anu>sar):
        print('ANURADHA')
    else:
        print('DRAW')
            

    
