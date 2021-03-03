
def solve (string,full_string):
    if string in full_string:
        return "yes"
    counter = 0
    while len(string) >= counter:
        last_letter = string[-1]
        end_string = string[:-1]
        string = last_letter + end_string 
        if full_string.find(string)>0:
            return "yes"
        counter +=1
            
    return "no"

full_string = input()
string = input()
print(solve(string,full_string))

