def solve(items):
    increase = False
    decrease = False
    for lengths in range(len(items)):
        if lengths ==0:
            pass
        else: 
            if items[lengths]>items[lengths-1]:
                increase = True
            elif items[lengths]<items[lengths-1]:
                decrease = True
            elif items[lengths]==items[lengths-1] and decrease==True or increase==True:
                return "No Fish"
            else:
                pass
    if increase==False and decrease==False:
        return "Fish At Constant Depth"
    elif increase==True and decrease==False:
        return "Fish Rising"
    elif increase==False and decrease==True:
        return "Fish Diving"
    else:
        return "No Fish"
fish1 = int(input())
fish2 = int(input())
fish3 = int(input())
fish4 = int(input())
print(solve([fish1,fish2,fish3,fish4]))
