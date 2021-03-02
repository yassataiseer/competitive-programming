def solve(number):
    answer = 0
    values = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
    number = number[::-1]
    try:
        for i in range(len(number)):
            if number[i]=="V" or number[i]=="X" and number[i-1]=="I":
                answer -= 1
                answer += values[number[i]]-1
            elif number[i]=="L" or number[i]=="C" and number[i-1]=="X":
                answer -= values[number[i]]
                answer += values[number[i]] - 10
            else:
                answer += values[number[i]]
    except IndexError:
        pass            
    return answer

print(solve(["L","V","I","I","I"]))