def solve(time):
    hour = 0
    minute = 0
    answer = 0
    if time<60 and time >=34:
        return 1
    hour = int(time/ 60)
    minute = time%60

    for j in range(1,hour+1): 
        for i in range(1,60): 
            boolean = solve1(j,i)
            if boolean == True:
                answer+=1
            if boolean == False:
                pass
    return answer        
    
def solve1(hour,minute):
    hour = list(str(hour))
    minute = list(str(minute))
    data = list(hour+minute)
    data = list(map(int,data))
    test = consecutive_checker(data)
    return test

def consecutive_checker(data):
    difference = 0
    difference = data[1] - data[0] 
    try:
        for i in range(len(data)):
            if data[i+1] - data[i] == difference:
                pass
            else:
                return False
    except IndexError:
        pass
    return True

time = int(input())
print(solve(time))