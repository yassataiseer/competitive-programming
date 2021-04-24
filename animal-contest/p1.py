#An Animal Contest 1 P1 - Alpaca Shapes
def circle(radius):
    return 3.14*radius*radius
def square(length):
    return length*length

dimensionss = input()
dimensionss = dimensionss.split(" ")
circle = circle(int(dimensionss[-1]))
square = square(int(dimensionss[0]))

if circle>square:
    print("CIRCLE")
else:
    print("SQUARE")
