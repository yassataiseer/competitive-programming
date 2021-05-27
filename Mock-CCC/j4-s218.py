latin_square_top = False
reduced_square_top = False

latin_square = False
reduced_square = False
left = []

times = int(input())
for i in range(times):
    x = input()
    x = list(x)
    if i ==0:

        if len(set(x))==len(x):
            latin_square_top = True
        if sorted(x)==x:
            reduced_square_top = True
    left.append(x[0])
            
if len(set(left))==len(left):
    latin_square = True

if sorted(left)==left:
    reduced_square = True
index = 0
answers = ["No","Latin","Reduced"]


if reduced_square and reduced_square_top and latin_square_top and latin_square:
    index+=2
elif latin_square and latin_square_top:
    index+=1

print(answers[index])


