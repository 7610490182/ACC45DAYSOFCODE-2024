# cook your dish here
t = int(input())

for _ in range(t):

    Points, Matches = map(int, input().split())
    print(max(Points - Matches, 0))