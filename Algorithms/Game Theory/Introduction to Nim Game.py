T = int(input())
for _ in range(T):
    N = int(input())
    ans = 0
    arr = map(int, input().split(" "))
    for item in arr:
        ans = ans^item
    if ans > 0:
        print("First")
    else:
        print("Second")