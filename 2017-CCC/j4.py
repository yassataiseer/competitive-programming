def solve(time):
    time_count = time
    answer = 0
    hours = 12
    minutes = 0
    counter = 0
    if time_count>=720:
        amount = time_count%60
        amount = time_count - amount
        amount = int(amount/720)
        answer +=  amount *31 
        time_count = time_count%720
    while time_count >= counter:
        counter +=1
        minutes +=1
        if minutes>= 60:
            minutes -=60
            hours += 1
        if hours >= 13:
            hours = 1
        decision = calculate(str(hours),str(minutes))
        if decision == True:
            answer +=1
        else:
            pass
    print(answer)

def calculate(hour,minute):
    if len(minute)==1:
        minute = "0" + minute
    if len(hour) == 1:
        minute_sum = int(minute[0])-int(minute[1])
        minhour_sum = int(hour)-int(minute[0])
        if minhour_sum==minute_sum:
            return True
        else:
            return False
    minute_sum = int(minute[0])-int(minute[1])
    hour_sum = int(hour[0]) - int(hour[1])
    minhour_sum = int(hour[1])-int(minute[0])
    if minhour_sum==minute_sum==hour_sum:
        return True
    else:
        return False
        
#print(calculate("1","59"))
time = int(input())
solve(time)