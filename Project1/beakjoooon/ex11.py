import sys
input = sys.stdin.read
T = int(input())
results = []
for i in range(T):
    data = list(map(int,input().split()))
    n=data[0]
    m=data[1]
    if n % 2 == 1 or m % 2 == 1:
        results.append("YES")
    else:
        results.append("NO")
for k in results:
    print(k)

