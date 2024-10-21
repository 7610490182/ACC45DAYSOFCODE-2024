# cook your dish here
for _ in range(int(input())):

    n=int(input())

    l=list(map(int,input().split()))
    d={}
    for i in l:
        d[i]=d.get(i,0)+1
    f=1
    for i in d:
        if d[i]%i!=0:
            f=0
            break
    if f==1:
        print("YES")
    else:
        print("NO")
    