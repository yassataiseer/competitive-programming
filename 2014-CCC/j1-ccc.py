def solve(side1,side2,side3):
    data = {0:"Scalene", 1:"Isosceles", 2:"Equilateral"}
    counter = 0
    total = side1+side2+side3
    if total == 180:
        if side1==side2 and side2==side3:
            counter+=2
        elif side2==side3:
            counter+=1
        elif side3 == side1:
            counter+=1
        return data[counter]
    else:
        return "Error"


side1 = int(input())
side2 = int(input())
side3 = int(input())
print(solve(side1,side2,side3))