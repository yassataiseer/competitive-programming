def solve(a,b,c,d,e,f):
    person_A = (a*3)+(b*2)+(c*1)
    person_B = (d*3)+(e*2)+(f*1)

    if person_A>person_B:
        print("A")
    elif person_B>person_A:
        print("B")
    else:
        print("T")


a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
f = int(input())
solve(a,b,c,d,e,f)