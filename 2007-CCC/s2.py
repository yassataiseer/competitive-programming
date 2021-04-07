def solve(options,dimensions):
    answers = []
    for dimension in dimensions:
        current_sum = int(dimension[0])*int(dimension[1])*int(dimension[2])
        options.append(current_sum)
        options = sorted(options)
        location = options.index(current_sum)
        try:
            answers.append(options[location+1])
        except IndexError:
            answers.append("Item does not fit.")

    return answers
#[6,16,30]
#[6,16,20,30]
options = []
dimensions = []
opt_amount = int(input())
for i in range(opt_amount):
    x = input()
    a,b,c = x.split(" ")
    y = int(a)*int(b)*int(c)
    options.append(y)

box_amount = int(input())
for i in range(box_amount):
    box_dim = []
    box = input()
    a,b,c = box.split(" ")
    box_dim.append(a)
    box_dim.append(b)
    box_dim.append(c)
    dimensions.append(box_dim)

answer = solve(options,dimensions)

for stuff in answer: 
    print(stuff)
