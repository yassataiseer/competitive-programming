def solve(summ, shift):
    counter = 1
    answer = summ
    while counter <= shift:
        summ = summ*10
        answer += summ
        counter += 1
    return answer

summ = int(input())
shift = int(input())
print(solve(summ,shift))