def solve(Name,Number,trail):
    name = ""
    counter = 0
    for i in range(len(Number)):
        counter1 = 0
        for j in range(len(trail)):
            if Number[i] == trail[j]:
                counter1 +=1
            
            if counter < counter1 :
                if len(name) == 0:
                    counter = counter1
                    name = Name[i]
                else: 
                    value = Name.index(name)
                    if int(Number[value])>int(Number[i]):
                        counter = counter1
                        name = Name[i]
                    else:
                        pass
    return name                


book = int(input())
Name = []
Number = []
trail = []
for i in range(book):
    x = input()
    x = x.split(" ")
    Name.append(x[0])
    Number.append(int(x[1]))
calls = int(input())
for i in range(calls):
    number = int(input())
    trail.append(number)
print(solve(Name,Number,trail))