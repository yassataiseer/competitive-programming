def solve(top_right,bottom_left):
    print(str(min(top_right)-1)+","+str(min(bottom_left)-1))
    print(str(max(top_right)+1)+","+str(max(bottom_left)+1))


top_right = []
bottom_left = []
coordinate_amount = int(input())
for i in range(coordinate_amount):
    coordinate = input()
    first,secound = coordinate.split(",")
    top_right.append(int(first))
    bottom_left.append(int(secound))
solve(top_right,bottom_left)
