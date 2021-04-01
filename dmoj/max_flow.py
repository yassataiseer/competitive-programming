def solve(values,scenarios_data):
    data = []
    prevous_index = 0
    for indexes in scenarios_data:
        amount = values[prevous_index:indexes+prevous_index]
        prevous_index = indexes
        if len(amount)>0:
            data.append(max(amount))
    return data




values = []
scenarios_data = []
scenarios = int(input())
scenarios_data.append(scenarios)
while scenarios-1!=0:
    next_secenario = int(input())
    scenarios_data.append(next_secenario)
    scenarios -=1
for i in range(sum(scenarios_data)):
    flow = int(input())
    values.append(flow)


answer = solve(values,scenarios_data[::-1])
for things in answer:
    print(things)


