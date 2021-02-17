def solve(data):
    previous_step = ""
    for numbers in data:
        if int(numbers)==99999:
            pass
        else:
            summ = int(numbers[0])+ int(numbers[1])
            if summ == 0:
                print(previous_step + " " +numbers[2:5])
            elif summ%2==0:
                previous_step = "right"
                print(previous_step + " "+numbers[2:5])
            else:
                previous_step = "left"
                print(previous_step + " "+numbers[2:5])



data = []
while True:
    x = input()
    data.append(x)
    if x=='99999':
        break
solve(data)