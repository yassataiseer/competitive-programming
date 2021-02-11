 


def remove(days, current_day, rate, total_value):
    new_total_value = total_value - (rate*current_day)
    if new_total_value >= 0:
        days += 1
        current_day = current_day*rate
        remove(days,current_day, rate, total_value)
    else:
        print(days)



total_value = int(input())
current_day = int(input())
infection_rate = int(input())
days = 0
remove(days,current_day,infection_rate,total_value)
