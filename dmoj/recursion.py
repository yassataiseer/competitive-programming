#Appleby Contest '19 P3 - A Recursion Problem
def solve(string):
    answer = 0
    string = string.split(" ")
    for components in string:
        components = components.replace("(","")
        components = components.replace(")","")
        try:
            components = int(components)
            answer+= components
        except ValueError:
            pass
    return answer
string = input()
print(solve(string))