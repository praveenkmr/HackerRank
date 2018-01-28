T = int(input())
for _ in range(T):
    N = int(input())
    ans = 0
    ct = 0
    arr = map(int, input().split(" "))
    for item in arr:
        ans = ans^item
        if item == 1:
            ct = ct + 1
    if ct == N :
        if N%2 == 0:
            print("First")
        else:
            print("Second")
    else:
        if ans > 0:
            print("First")
        else:
            print("Second")  