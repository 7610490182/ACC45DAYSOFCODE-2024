# cook your dish here
for _  in range(int(input())):

    n=int(input())

    s=input()
    for i in s:
        cnt = s.count(i)
        if cnt>=2:
            print(n-2)
            break
    else:
        print(-1)