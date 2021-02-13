def solve(time):
    counter = 0
    factor = 0
    while time[0] <=7:
        time[0] += 1
        counter +=1
        if counter == 2:
            break
            return str("{0:0=2d}".format(time[0]))+":"+str("{0:0=2d}".format(time[-1]))

    while time[0] >= 7 and time[0] <= 10:
        time[0]+=2
        counter += 1 
        if counter == 2:
            factor += 1
            break
    while time[0] >= 15 and time[0] <= 19:
        time[0]+=2
        counter += 1
        if counter == 2:
            factor +=1
            break
            #return str("{0:0=2d}".format(time[0]))+":"+str("{0:0=2d}".format(time[-1]))
    while time[0] >=19:
        time[0]+=1
        counter +=1
        if time[0]>24:
            time[0]=1
        if counter ==2:
            return str("{0:0=2d}".format(time[0]))+":"+str("{0:0=2d}".format(time[-1]))
    while factor>0:
        time[1] +=30
        while time[1]>60:
            time[1] -= 60
            time[0]+=1
        factor -= 1
    return str("{0:0=2d}".format(time[0]))+":"+str("{0:0=2d}".format(time[-1]))




time = input()
time = time.split(":")
time = list(map(int, time))
print(solve(time))