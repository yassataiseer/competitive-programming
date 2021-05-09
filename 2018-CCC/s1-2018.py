def solve(data):
    mid_points = []
    potential_answers = []
    data = sorted(data)
    #print(data)
    for i in range(len(data)-1):
        mid_points.append(data[i]+(abs(data[i+1]-data[i])/2))
    mid_points.insert(0,0)
    for numbers in range(len(data)):
        if numbers==0 or numbers+1==len(data):
            pass
        else:
            potential_answers.append(abs(data[numbers]-mid_points[numbers])+abs(mid_points[numbers+1]-data[numbers]))
    #print(mid_points)
    return min(potential_answers)

#print(solve([16,0,10,4,15]))
userinput = []
cases = int(input())
for i in range(cases):
    x = int(input())
    userinput.append(x)
print(solve(userinput))


