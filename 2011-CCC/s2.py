def solve(attempts,correct):
    answer = 0
    for i in range(len(attempts)):
        if attempts[i]==correct[i]:
            answer+=1
    return answer
attempts = []
correct = []
test_cases = int(input())
for i in range(test_cases):
    x = input()
    attempts.append(x)
for i in range(test_cases):
    x = input()
    correct.append(x)
print(solve(attempts,correct))