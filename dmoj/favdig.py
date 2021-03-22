def solve(amount):
    numbers = []
    for i in range(len(amount)):
        data = amount[i]
        data = list(map(int,data))
        numbers.append(max(data))
    for x in numbers:
        print(x)

number1 = input()
number2 = input()
number3 = input()
number4 = input()
number5 = input()

data = [number1,number2,number3,number4,number5]
solve(data)
