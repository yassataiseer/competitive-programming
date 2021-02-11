
def solve(a,b,c):
    b = b*2
    c = c*3
    if a*b*c >= 10:
        print ("happy")
    else:
        print("sad")

a = int(input())
b = int(input())
c = int(input())
solve(a,b,c)