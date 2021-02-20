
def function(data):
    value = 0
    while len(data)>value:
        current_value = data[value]
        if current_value<4:
            print(0)
            value+=1
        else:
            answer = 0
            current_value = current_value-2
            current_value //= 2
            answer = (current_value*(current_value+1))//2
            print(answer)        
            value+=1



data = []
query = int(input())
for i in range(query):
    x = int(input())
    data.append(x)
function(data)