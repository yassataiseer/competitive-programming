def solve(current,destination,charges ):
    tracker = []
    if current[0]==destination[0]:
        tracker.append(False)
    else:
        tracker.append(True)
    if current[-1]==destination[-1]:
        tracker.append(False)
    else:
        tracker.append(True)
    if tracker[-1] ==True and tracker[0]==True:
        total_sum_x = 0
        total_sum_x = int(destination[0])-int(current[0])
        total_sum_x = abs(total_sum_x)
        total_sum_y = 0
        total_sum_y = int(destination[-1])-int(current[-1])
        total_sum_y = abs(total_sum_y)
        if charges % (total_sum_y+total_sum_x)  == 0:
            return "Y"
        else:
            return "N"
    elif tracker[-1] == True and tracker[0] == False:
        total_sum_y = 0
        total_sum_y = int(destination[-1])-int(current[-1])
        total_sum_y = abs(total_sum_y)     
        if  charges % total_sum_y ==0:
            return "Y"
        else:
            return "N"
    elif tracker[-1] == False and tracker[0] == True:
        total_sum_x = 0
        total_sum_x = int(destination[0])-int(current[0])
        total_sum_x = abs(total_sum_x)  
        if  charges % total_sum_x == 0:
            return "Y"
        else:
            return "N"
    else:
        return "N"


current = input()
current = current.split(" ")
destination= input()
destination = destination.split(" ")
charges = int(input())
print(solve(current,destination,charges))
