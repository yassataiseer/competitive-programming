#data = {"00":"A","01":"B","10":"C","110":"D","111":"E"}
table = {}
tries = int(input())
for number in range(tries):
    given = input()
    given = given.split(" ")
    table[given[1]] = given[0]
coded_message = input()
given_code = ""
answer = ""
print(table)
for letters in coded_message:
    print(letters)
    print(given_code)
    given_code+=letters
    if given_code in table:
        continue
    else:
        if given_code[0:-2] in table:
            answer += table[given_code[0:-2]]
            given_code = given_code[-1]
        else:
            pass

print(answer)
