def solve(canvas,instructions):
    for i in instructions:
        if instructions[0] == "R":
            data = ""
            row = canvas[int(instructions[1])]
            location = canvas.index(row)
            for k in location:
                if k == "G":
                    print(k)
                    data += "B"
                else:
                    data +="G"
            
        elif instructions[0] == "C":
            for k in canvas:
                location = int(instructions[-1])
                if k[location] == "G":
                    k[location] == "B"
                    print("CANVAS")
                else:
                    k[location] == "B"

        return canvas
            
            
                        

canvas = []
instructions = []
rows = int(input())
columns = int(input())
cases = int(input())
for i in range(cases):
    x = input().split(" ")
    instructions.append(x)
for i in range(rows):
    canvas.append("B"*columns)
print(solve(canvas,instructions))