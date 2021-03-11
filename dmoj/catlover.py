
cat_counter = 0
dog_counter = 0
test_cases = int(input())
for i in range(test_cases):
    things = input()
    if things == "cats":
        cat_counter+=1
    else:
        dog_counter+=1
if cat_counter>dog_counter:
    print("cats")
elif dog_counter>cat_counter:
    print("dogs")
else:
    print("equal")
