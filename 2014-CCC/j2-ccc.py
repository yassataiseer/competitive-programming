def solve(line):
    a_count = line.count("A")
    b_count = line.count("B")
    if a_count>b_count:
        return "A"
    elif a_count<b_count:
        return "B"
    else:
        return "Tie"
x = int(input())
line = input()
print(solve(line))
