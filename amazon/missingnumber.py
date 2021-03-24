def find_missing(array):
    data1 = list(range(1,len(array)+1))
    for i in range(len(data1)):
        if data1[i] not in array:
            return i+1

print(find_missing([3, 7, 1, 2, 8, 4, 5]))
