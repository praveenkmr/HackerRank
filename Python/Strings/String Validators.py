if __name__ == '__main__':
    s = input()
    flag_isalnum = 0
    flag_isalpha = 0
    flag_isdigit = 0
    flag_islower = 0
    flag_isupper = 0
    
    for ch in s:
        if ch.isalnum():
            flag_isalnum = 1
        if ch.isalpha():
            flag_isalpha = 1
        if ch.isdigit():
            flag_isdigit = 1
        if ch.islower():
            flag_islower = 1
        if ch.isupper():
            flag_isupper = 1
    
    if(flag_isalnum):
        print("True")
    else:
        print("False")
        
    if(flag_isalpha):
        print("True")
    else:
        print("False")
        
    if(flag_isdigit):
        print("True")
    else:
        print("False")
        
    if(flag_islower):
        print("True")
    else:
        print("False")
        
    if(flag_isupper):
        print("True")
    else:
        print("False")
