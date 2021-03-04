def mk_text(data):
    answer = ""
    text = ""
    change = False
    for i in range(len(data)):
        if i==0:
            text += data[i]
            pass
        elif data[i]==data[i-1]:
            text+=data[i]
        elif data[i] != data[i-1] and change==False:
            answer+= str(len(text))+" "+text[0] + " "
            text = data[i]
            change = True
        elif data[i] != data[i-1]  and change == True:
            answer+= str(len(text))+" "+text[0] + " "
            text = data[i]
            change = False
        if i == len(data)-1:
            answer+= str(len(text))+" "+text[0] + " "
    answer = answer.rstrip()
    return answer

def solve(query):
    answer = []
    for data in query:
        answer = mk_text(data)
        print(answer)

query = []
amount = int(input())
for i in range(amount):
    write = input()
    query.append(write)
solve(query)
