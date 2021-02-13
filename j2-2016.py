def solve(line_1,line_2,line_3,line_4):
    x_series = 0
    y_series = 0
    if sum(line_1)==sum(line_2)==sum(line_3)==sum(line_4):
        x_series = sum(line_1)
    else:
        return "not magic"
    vertical_sum = 0
    
    for i in range(len(line_1)):
        if i==0:
            vertical_sum +=line_1[i]
            vertical_sum += line_2[i]
            vertical_sum += line_3[i]
            vertical_sum += line_4[i]
        else:
            current_sum = 0
            current_sum += line_1[i]
            current_sum += line_2[i]
            current_sum += line_3[i]
            current_sum += line_4[i]
            if current_sum == vertical_sum:
                pass
            else:
                return "not magic"
    if x_series==vertical_sum:
        return "magic"
    else:
        return "not magic"

line_1 = input()
line_1 = line_1.split(" ")
line_1 = list(map(int, line_1)) 
line_2 = input()
line_2 = line_2.split(" ")
line_2 = list(map(int, line_2)) 
line_3 = input()
line_3 = line_3.split(" ")
line_3 = list(map(int, line_3)) 
line_4 = input()
line_4 = line_4.split(" ")
line_4 = list(map(int, line_4)) 

print(solve(line_1,line_2,line_3,line_4))