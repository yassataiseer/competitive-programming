def solve(loc_og,loc_final):
    value = abs(loc_og[0]-loc_final[0])+abs(loc_og[1]-loc_final[1])
    return int(value/3)

loc_og = input()
loc_final = input()
loc_og = loc_og.split(" ")
loc_og = list(map(int,loc_og))
loc_final = loc_final.split(" ")
loc_final = list(map(int,loc_final))
print(solve(loc_og,loc_final))
