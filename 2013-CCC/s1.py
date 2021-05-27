def check(num):
    num = str(num)
    given_sum = ""
    for letters in num:
        if letters in given_sum:
            return False
        else:
            given_sum+=letters
    return True



def solve(number):
    while True:
        if check(number):
            break
        else:
            number+=1
    return number
#print(solve(1989))
x = int(input())
print(solve(x+1))        