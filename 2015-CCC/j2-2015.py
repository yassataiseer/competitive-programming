def solve(query):
    sad_counter = query.count(":-(")
    happy_counter = query.count(":-)")
    if sad_counter==0 and happy_counter ==0:
        return "none"
    elif sad_counter>happy_counter:
        return "sad"
    elif sad_counter<happy_counter:
        return "happy"
    else:
        return "unsure"

query  = input()
print(solve(query))