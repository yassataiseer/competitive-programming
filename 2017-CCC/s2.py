def solve(data):
    counter = len(data)
    big = []
    small = []
    while counter>0:
        try:
            counter-=1
            big.append(max(data))
            data.remove(max(data))
            small.append(min(data))
            data.remove(min(data))
        except ValueError:
            break
    big = big[::-1]
    small = small[::-1]

    final = []
    for i in range(max(len(big),len(small))):
        final.append(str(small[i]))
        final.append(str(big[i]))
    print(" ".join(final))


test_cases = int(input())
data = input()
data = data.split(" ")
data = list(map(int,data))
solve(data)


