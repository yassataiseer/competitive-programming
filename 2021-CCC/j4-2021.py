


def solve(query):
    values = {"L":3,"M":2,"S":1}
    answer = 0

    query = list(query)    
    prev_letter = query[0]
    counter = 0
    for letter in query:
        if values[letter]<values[prev_letter]:
            prev_letter =  letter
            counter+=1
        elif values[letter]>values[prev_letter]:
            location = query.index(prev_letter)
            current_loc = query.index(letter)
            query[location],query[counter] = query[counter],query[location]
            answer+=1
            counter+=1
        else:
            counter+=1
            pass
    return answer

query = input()
print(solve(query))
























