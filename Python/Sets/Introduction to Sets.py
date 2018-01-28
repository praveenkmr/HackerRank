def average(array):
    set_=set(array)
    average = 0
    for item in set_:
        average = average + item
    average = average / len(set_)
    return average

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)