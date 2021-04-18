def solve(bale_num,bale_width):
    return round(bale_num/bale_width)

def get_nearest_trac(tractors,map_farm):
    passages = []
    counter = 0    
    for selection in map_farm:
        if selection=="1":
            passages.append(counter)
            counter = 0
        else:
            counter+=1
    passages.append(counter)
    trac_max = 0
    while True:

        if max(passages)>=max(tractors):
            trac_max = max(tractors)
            break
        else:
            tractors.remove(max(tractors))
    return trac_max


bale_num = int(input())
tractor_num = int(input())
tractors = input()
tractors = tractors.split(" ")
tractors = list(map(int,tractors))
map_farm_num = int(input())
map_farm = input()

bale_width = get_nearest_trac(tractors,map_farm)
print(solve(bale_num,bale_width))
