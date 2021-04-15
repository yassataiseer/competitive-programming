def solve(array):
    sums = []
    counter = 0
    for components in array:
        counter+=1
        try:
            next_num = array[counter]
            difference = abs(components-next_num)
            if difference in sums:
                pass
            else:
                sums.append(difference)
        except IndexError:
            pass
    return len(sums)

#results = list(map(int, results))
#print(clean_array([7,3,4,6,4,5,7,5]))
array = []
while True:
    data = input()
    if data=="0":
        break
    data = data.split(" ")
    data = list(map(int,data))
    array.append(data)

for components in array:
    print(solve(components))