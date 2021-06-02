
def solve(given_list):
    difference = []
    for i in range(len(given_list)):
        sum1 = sum(given_list[0:i])
        sum2 = sum(given_list)-sum1
        if len(difference)==0:
            difference.append(abs(sum1-sum2))
        else:
            if difference[0]>abs(sum1-sum2):
                difference[0]=abs(sum1-sum2)
    return difference[0]

answer = []
y = input()
x = input()
x = x.split(" ")
x = list(map(int,x))
for i in range(len(x)):
    answer.append(str(solve(x)))
    front = x[0]
    del x[0]
    x.append(front)
answer = " ".join(answer)
print(answer)
