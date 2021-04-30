def solve(length):
    shape = []
    head = "*x*"
    body = " xx"
    feet = "* *"
    new_head = head[0]*length+head[1]*length+head[2]*length+"~"
    shape.append(new_head*length)
    new_body = body[0]*length+body[1]*length+body[2]*length+"~"
    shape.append(new_body*length)
    new_feet = feet[0]*length+feet[1]*length+feet[2]*length+"~"
    shape.append(new_feet*length)

    return shape
x = int(input())
answer = solve(x)
word = ""
for stuff in answer:
    for letters in stuff:
        if letters=="~":
            print(word)
            word = ""
        else:
            word+=letters
