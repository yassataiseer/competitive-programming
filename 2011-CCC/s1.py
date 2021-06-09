def solve(sentences):
    T_count = 0
    S_count = 0
    for i in sentences:
        i = i.lower()
        if i=="s":
            S_count+=1
        if i=="t":
            T_count+=1
    answer = ""
    if T_count>S_count:
        answer = "English"
    elif S_count>T_count:
        answer = "French"
    else:
        answer = "French"
    return answer
sentences = ""
test_cases = int(input())
for i in range(test_cases):
    x = input()
    sentences+=x
print(solve(sentences))