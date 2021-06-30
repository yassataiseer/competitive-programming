def solve(flower_data):
    while True:
        x = check(flower_data)
        if x:
            return flower_data
        new_data = []
        for j in range(len(flower_data)):
            new_data.append([i[j] for i in flower_data])
        flower_data = new_data[::-1]

def check(flower_data):

    for i in range(len(flower_data)):
        if sorted([j[i] for j in flower_data])!=[j[i] for j in flower_data]:
            return False
        if sorted(flower_data[i][0:len(flower_data)])!=flower_data[i][0:len(flower_data)]:
            return False
    return True




submition = []
test_cases = int(input())
for amount in range(test_cases):
    row = input()
    row = row.split(" ")
    row = list(map(int,row))
    submition.append(row)
answers = solve(submition)
for answer in answers:
    answer = list(map(str,answer))
    print(" ".join(answer))





