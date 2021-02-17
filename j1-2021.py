def solve(water_level):
    new_level = water_level*5
    if (new_level-400)<water_level:
        print(new_level-400)
        print(1)
        
    elif (new_level-400)>water_level:
        print(new_level-400)
        print(-1)
    else:
        print(new_level-400)
        print(0)

water_level = int(input())
solve(water_level)