def solve(length,width):
    perimeter = 2*(length+width)
    area = length*width
    if area>perimeter:
        print("Area")
    elif area<perimeter:
        print("Peri")
    else:
        print("Eq")

length = int(input())
width = int(input())
solve(length,width)