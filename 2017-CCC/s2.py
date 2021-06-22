def solve(data):
    counter = len(data)
    big = []
    small = []
    while counter>0:
        try:
            counter-=1
            if len(data)==1:
                if data[0]>max(small):
                    big.append(data[0])
                elif data[0]<max(small):
                    small.append(data[0])
            big.append(max(data))
            data.remove(max(data))
            small.append(min(data))
            data.remove(min(data))
        except ValueError:
            break
    while min(big)<max(small):
        big1 = max(big)
        small1 = max(small)
        big.remove(big1)
        small.remove(small1)
        big.append(small1)
        small.append(big1)
    small=sorted(small)
    big = sorted(big)
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


