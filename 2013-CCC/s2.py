def solve(max_weight,car_weights):
    answer = 0
    current_weight = 0
    counter = 0
    for i in range(len(car_weights)):
        if i ==0:
            if sum(car_weights[i:i+4])>max_weight:
                break
            else:
                answer+=4
        else:
            if sum(car_weights[i:i+4])>max_weight:
                break
            else:
                answer+=1            
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






