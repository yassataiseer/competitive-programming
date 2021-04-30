n = int(input())
counter = 0
prev_term = []
for i in range(1,n+1):
    if i>5 or n-i>5:
        pass
    elif n-i>=0 and n-i not in prev_term:
        counter+=1
        prev_term.append(n-i)
        prev_term.append(i)
print(counter)

