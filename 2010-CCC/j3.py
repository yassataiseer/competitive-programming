A = 0
B = 0
while True:
    instruction = input()
    if instruction=="7":
        break
    instruction = instruction.split(" ")
    if len(instruction)==2:
        if instruction[-1]=="B":
            print(B)
        elif instruction[-1]=="A":
            print(A)
    else:    
        if instruction[0]=="1":
            if instruction[1]=="A":
                A+=int(instruction[-1])
            elif instruction[1]=="B":
                B+=int(instruction[-1]) 
        elif instruction[0]=="3":
            if instruction[1]=="A":
                A+=int(instruction[-1])
            elif instruction[1]=="B":
                B+=int(instruction[-1])
        elif instruction[0]=="4":
            if instruction[1]=="A":
                A = A*int(instruction[-1])
            elif instruction[1]=="B":
                B = B* int(instruction[-1])
        elif instruction[0]=="5":
            if instruction[1]=="A":
                A = A-int(instruction[-1])
            elif instruction[1]=="B":
                B = B-int(instruction[-1])
        elif instruction[0]=="6":
            if instruction[1]=="A":
                A = A/int(instruction[-1])
            elif instruction[1]=="B":
                B = B/int(instruction[-1])
