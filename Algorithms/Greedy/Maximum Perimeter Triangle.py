n = int(input())
lis = sorted(int(i) for i in input().split())
i=n-3;
while i>=0 and (lis[i]+lis[i+1] <= lis[i+2]):
    i = i-1
    
if i>=0:
    print(lis[i],lis[i+1],lis[i+2])
else:
    print(-1)