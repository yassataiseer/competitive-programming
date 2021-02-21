def solve(data):
    while sorted(data) != data:
        for i in range(len(data)):
            try:
                if data[i]>data[i+1]:
                    data[i],data[i+1] = data[i+1],data[i]
            except IndexError:
                pass
    return data
print(solve([4,7,321,1]))

### This is merge sort 
### Uses O(N^2)
### Takes two numbers side by side and swaps them if the first is greater than the other