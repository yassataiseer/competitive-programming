def solve(p1,p2):
    answer = 0
    war = False
    for i in range(len(p1)):
        if int(p1[i])==int(p2[i]) and war==False:
            answer+=1
            war = True
        elif int(p1[i])==int(p2[i]) and war==True:
            pass
        elif int(p1[i])!=int(p2[i]) and war==True:
            war = False

    return answer

x = int(input())
p1 = input()
p2 = input()
p1 = p1.split(" ")
p2 = p2.split(" ")
print(solve(p1,p2))
