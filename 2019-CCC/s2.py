def check_prime(number):
    if number > 1:
        for i in range(2, number):
            if (number % i) == 0:
                return False
        return True



def solve(number,number1):
    while True:
        if check_prime(number1)==True and check_prime(number)==True:
            return [number,number1]
        number-=1
        number1+=1

stuff = []
amount_cases = int(input())
for i in range(amount_cases):
    x = int(input())
    answer = solve(x,x)
    stuff.append(str(answer[0])+" "+str(answer[-1]))

for things in stuff:
    print(things)

