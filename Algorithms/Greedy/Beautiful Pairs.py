N = int(input())
dict_ = {}

for item in input().split():
    dict_[item] = dict_.get(item,0) + 1 

b_pair = 0;

for item in input().split():
    if dict_.get(item,0) > 0 :
        dict_[item] = dict_[item] - 1
        b_pair = b_pair + 1
if(b_pair < N):
    print(b_pair + 1)
else:
    print(b_pair - 1)