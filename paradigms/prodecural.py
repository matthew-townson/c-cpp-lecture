def function1(num):
    num = num + 1
    return num

def function2(num):
    num = num + 2
    return num

def main():
    userFunc = int(input('Enter the number function to run: '))
    userInput = int(input('Enter value to be used in function: '))
    if userFunc == 1:
        out = function1(userInput)
        print(out)
    elif userFunc == 2:
        out = function2(userInput)
        print(out)
    else:
        print('That function doesn\'t exist')

main()