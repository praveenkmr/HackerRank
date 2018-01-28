def capitalize(string):
    string = string.split(' ')
    return (' '.join( word.capitalize() for word in string ))


if __name__ == '__main__':
    string = input()
    capitalized_string = capitalize(string)
    print(capitalized_string)