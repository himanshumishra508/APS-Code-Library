t=int(input())
while t:
    t-=1
    n=int(input())
    top_dice = n%4
    ans=0
    if top_dice==1:
        ans+=20
    elif top_dice==2:
        ans+=36
    elif top_dice==3:
        ans+=51
    elif top_dice==0:
        ans+=60
    if n>4:
        if n%4==0:
            ans+=44*((n//4)-1)
        else:   
            ans+=44*((n//4))
    if n>4 and n%4>0:
        ans+=4*(4-(n%4))
    print(ans)