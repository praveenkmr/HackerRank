T = int(input())
for i in range(0,T):
    values = input().split()
    n,m=int(values[0]),int(values[1])
    if n%2 == 0 or m==1:
        print(2)
    else:
        print(1)
        