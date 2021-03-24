def solve(string):
    data = {}
    for i in string:
        data[i] =string.count(i)
    for key in data:
        if data[key]==1:
            return key
    return False

print(solve("aaabcccdeeef"))