def solve(data):
    big = []
    small = []
    if len(data)==1:
        return data
    data=sorted(data)
    big = data[0:int(len(data)/2)]
    small = data[int(len(data)/2):len(data)]
    small = sorted(small)
    big = sorted(big)
    small = small[::-1]
    final = []
    for i in range(max(len(big),len(small))):
        try:
            final.append(str(small[i]))
        except IndexError:
            pass
        try:
            final.append(str(big[i]))
        except IndexError:
            pass
    final = final[::-1]
    print(" ".join(final))


test_cases = int(input())
data = input()
data = data.split(" ")
data = list(map(int,data))
solve(data)


