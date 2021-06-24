t=int(input())
while t:
    t-=1
    xa,xb,Xa,Xb = map(int, input().split())
    print(Xa//xa + Xb//xb) 