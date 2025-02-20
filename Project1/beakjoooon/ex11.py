n=int(input())
s=0
arr=[0]*n
s_arr=[]
for i in range(n):
    k=int(input())
    s_arr.append(k)
    s+=k


s=s/2
if n==3:
    arr[0]=s-s_arr[1]
    arr[1]=s-s_arr[2]
    arr[2]=s-s_arr[0]
else:
    arr[n//2]=s-sum(s_arr)-s_arr[n//2]
    middle=arr[n//2]
    for i in range(n//2):
        start=n//2-i-1
        end=n//2+i+1
        arr[start]=s_arr[start]-middle
        arr[end]=s_arr[end]-middle
        middle=sum(s_arr[start:end])-middle
for i in arr:
    print(str(i).rstrip('0').rstrip('.'))

