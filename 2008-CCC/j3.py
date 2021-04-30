def solve(Name,Number,trail):
    name = ""
    counter = 0
    for i in range(len(Number)):
        counter1 = trail.count(Number[i])
        if counter1 > counter:
            counter = counter1
            name = Name[i]

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