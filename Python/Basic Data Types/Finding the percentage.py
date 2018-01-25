n = int(input())
dict_ = {}
for _ in range(n):
    line = input().split()
    average = float(line[1])+float(line[2])+float(line[3])
    average = average/3.0
    dict_[line[0]] = average
name = input()
print('{:2.2f}'.format(dict_[name]))