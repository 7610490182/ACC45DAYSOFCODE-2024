# cook your dish here
t = int(input())
for i in range(t):
    x,y=map(int,input().split())
    if x<y:
        print("bike")
    elif x>y:
        print("car")
    else :
        print("same")