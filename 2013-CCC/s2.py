def solve(max_weight,car_weights):
    answer = 0
    current_weight = 0
    counter = 0
    for i in range(len(car_weights)):
        current_weight += car_weights[i]
        if current_weight>max_weight:
            break
        else:
            answer+=1
        counter+=1
        if counter==4:
            current_weight = 0
            counter = 0
            #answer-=1
    return answer

##print(solve(100,[50,30,10,10,40,50]))

#print(solve(100,[150,1,1]))
car_weights = []
max_weight = int(input())
car_num = int(input())
for i in range(car_num):
    x = int(input())
    car_weights.append(x)

print(solve(max_weight,car_weights))






