
def remove(days,people_infected,infection_rate,total_value):
    new_total_value = total_value - (infection_rate*people_infected)
    if new_total_value >=0:
        days += 1
        people_infected = people_infected*infection_rate
        remove(days,people_infected,infection_rate,total_value)
    else:
        print(days)

total_value = int(input())
people_infected = int(input())
infection_rate = int(input())
days = 0
remove(days,people_infected,infection_rate,total_value)
