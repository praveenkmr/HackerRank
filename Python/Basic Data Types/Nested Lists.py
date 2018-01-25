if __name__ == '__main__':
    name_list = []
    min_ = 999
    second_min = 999
    for _ in range(int(input())):
        name = input()
        score = float(input())
        min_ = min(min_,score)
        name_list.append([name,score])
    name_list.sort()
    for item in name_list:
        if item[1] < second_min and item[1] > min_ :
            second_min = item[1]
    for item in name_list:
        if item[1] == second_min :
            print(item[0])