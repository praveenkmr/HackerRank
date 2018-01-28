n = int(input())
s = set(map(int, input().split())) 

m = int(input())
for i in range(m):
    op = list([x for x in input().split()])
    if op[0] == 'pop':
        s.pop()
    elif op[0] == 'discard':
        val = int(op[1])
        s.discard(val)
    else:
        val = int(op[1])
        s.remove(val)
        
sum_ = 0
for i in range(len(s)):
    sum_ += s.pop()
    
print(sum_)
