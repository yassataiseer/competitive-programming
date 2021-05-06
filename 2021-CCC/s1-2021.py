def solve(boards,lengths):
    answer = 0
    counter = 0
    for i in range(len(boards)-1):
        if boards[i]==boards[i+1]:
            answer+= boards[i]*lengths[counter]
            counter +=1
        else:
            answer += lengths[counter]*(boards[i]+boards[i+1])/2
            counter+=1
    if int(answer)==answer:
        return int(answer)
    return answer

amount = int(input())
boards = input()
lengths = input()
boards = boards.split(" ")
lengths = lengths.split(" ")
boards = list(map(int,boards))
lengths = list(map(int,lengths))
print(solve(boards,lengths))