def solve(line1,line2):
    for i in range(len(line1)):
        if line1[i]==line2[i]:
            return "bad"
        if line1[line2.index(line1[i])]==line2[i]:
            pass
        else:
            return "bad"
    return "good"
amount = int(input())
line1 = input()
line1 = line1.split(" ")
line2 = input()
line2 = line2.split(" ")
if amount%2==0:
    print(solve(line1,line2))
else:
    print('bad')


# Ada Alan John Grace
# John Grace Alan Ada




