'''
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
remove(days,people_infected,infection_rate,total_value)'''
def remove(days, people_infected, infection_rate, P, total_people_infected):
    if total_people_infected <= P:
        days += 1
        people_infected = people_infected * infection_rate
        total_people_infected += people_infected
        remove(days, people_infected, infection_rate, P, total_people_infected)
    else:
        print(days)

P = int(input())
people_infected = int(input())
infection_rate = int(input())
days = 0
if infection_rate==1 and people_infected==1:
    print(P)
else:
    remove(days,people_infected,infection_rate,P, people_infected)