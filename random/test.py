set1 = []
set2 = []
prev_number = 0
def ran(start, end):
    return range(start, end+1)
for num in range(5000):
    if inp > 1:  
        for i in ran(2, inp//2): 
            if (inp % i) == 0: 
                print(inp, "is not a prime number") 
                break
    else: 
        print(inp, "is a prime number") 
    
    else: 
    print(inp, "is not a prime number") 
