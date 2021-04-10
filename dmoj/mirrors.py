#Mirrored Pairs
def solve(data):
    answer = []
    for words in data:
        if "q" and "p" in words or "b"and"d" in words:
            answer.append("Mirrored pair")
        else:
            answer.append("Ordinary pair")
    return answer

data = []
while True:
    words = input()
    if words=="  ":
        break
    data.append(words)

answer = solve(data)
print("Ready")
for words in answer:
    print(words)
