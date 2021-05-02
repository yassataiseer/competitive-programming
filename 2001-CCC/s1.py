def solve(given_string):
    print("Cards Dealt              Points")
    data = {"C":"Clubs","D":"Diamonds","H":"Hearts","S":"Spades"}
    card_value = {"A":4,"K":3,"Q":2,"J":1}
    current_type = ""
    current_string = ""
    points = 0
    counter = 0
    total_points = 0
    for letters in given_string:
        if letters in data:
            if counter==0:
                current_type = data[letters]
            else:
                other_string = current_string.replace(" ","")
                current_string = current_string.strip()
                if len(other_string)==0:
                    points+=3
                if len(other_string)==1:
                    points+=2
                if len(other_string)==2:
                    points+=1
                print(current_type+" "+current_string+"             "+str(points))
                current_string = ""
                current_type = data[letters]
                total_points +=points
                points = 0
        else:
            current_string+=letters+" "
            if letters in card_value:
                points+= card_value[letters]
        counter+=1
        if counter==len(given_string):
                print(current_type+" "+current_string+"             "+str(points))
                total_points+=points
    return total_points
s = input()
x = solve(s)
print("                       Total "+str(x))














