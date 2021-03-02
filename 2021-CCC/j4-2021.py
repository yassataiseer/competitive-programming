
def solve(list1):
    counter = 0
    difference = []
    list2 = sorted(list1)
    zip_object = zip(list1, list2)
    for list1_i, list2_i in zip_object:
        if list1_i-list2_i!= 0:
            counter +=1
        difference.append(list1_i-list2_i)
    if counter == 0:
        return counter
    return counter
data = []
sorter = input()
for i in sorter:
    if i == "L":
        data.append(1)
    elif i == "M":
        data.append(2)
    else:
        data.append(3)
print(solve(data))