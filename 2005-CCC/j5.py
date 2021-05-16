def solve(message):
    B_contain = False
    A_contain = False
    N_contain = False
    S_contain = False
    if "A" in message:
        A_contain = True
    if "B" in message:
        B_contain = True
    if "N" in message:
        N_contain = True
    if "S" in message:
        S_contain = True
    if B_contain==True and A_contain==True and S_contain==True:
        return "YES"
    elif A_contain==True and N_contain==True:
        return "YES"
    elif A_contain==True and N_contain==B_contain==S_contain==False:
        return "YES"
    elif S_contain==True and A_contain==B_contain==False:
        return "NO"
    elif S_contain==False and A_contain==B_contain==True:
        return "NO"
    else:
        return "NO"
print(solve("A"))
print(solve("ANA"))
print(solve("ANANA"))
print(solve("BANANAS"))
print(solve("BANANA"))



