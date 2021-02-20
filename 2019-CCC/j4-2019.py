def solve_x(data):
    for i in data:
        i = i.split(" ")
        if sorted(i) == i:

            pass
        else:
            return True
    return False

def solve_y(data):
    for i in range(len(data)):
        for j in data:
            print(j)
            print("+++++")
            if data[i][i] < data[i+1][i]:
                pass
            else:
                return True
    return False

data = []
sunflower_amount = int(input())
for i in range(sunflower_amount):
    x = input()
    data.append(x)
print(solve_x(data))
print(solve_y(data)) 