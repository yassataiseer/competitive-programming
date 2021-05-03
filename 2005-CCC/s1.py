def solve(phone_number):
    answer = ""
    phone_table = {"A":2,"B":2,"C":2,"D":3,"E":3,"F":3,"G":4,"H":4,"I":4,
    "J":5,"K":5,"L":5,"M":6,"N":6,"O":6,"P":7,"Q":7,"R":7,"S":7,"T":8,"U":8,"V":8,
    "W":9,"X":9,"Y":9,"Z":9  }
    phone_number = phone_number.replace("-","")
    phone_number = phone_number[0:10]
    for digits in phone_number:
        if digits in phone_table:
            answer+= str(phone_table[digits])
            if len(answer)==3 or len(answer)==7:
                answer+="-"
        else:
            answer+= str(digits)
            if len(answer)==3 or len(answer)==7:
                answer+="-"
    return (answer)
#print(solve("5059381123"))
answers = []
test_cases = int(input())
for i in range(test_cases):
    current_number = input()
    x = solve(current_number)
    answers.append(x)
for answer in answers:
    print(answer)



