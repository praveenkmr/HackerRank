if __name__ == '__main__':
    N = int(input())
    array_list = []
    def print_():
        print(array_list)
    def sort():
        array_list.sort()
    def pop():
        array_list.pop()
    def insert():
        array_list.insert(index,value)
    def append():
        array_list.append(value)
    def reverse():
        array_list.reverse()
    def remove():
        array_list.remove(value)
    
    for i in range(0,N):
        user_command = input()
        command = user_command.split()
        com = command[0]
        if len(command) >= 2:
            value = int(command[1])
            index = value
        if len(command)>=3:
            value = int(command[2])
            index = int(command[1])
        
        commands ={
            "insert":insert,
            "remove":remove,
            "pop":pop,
            "reverse":reverse,
            "append":append,
            "insert":insert,
            "sort":sort,
            "print":print_,
        }
        
        commands[com]()

