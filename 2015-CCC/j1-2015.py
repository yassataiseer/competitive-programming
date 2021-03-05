def solve(month,day):
    if month==2 and day==18:
        return "Special"
    elif month<2:
        return "Before"
    elif month>2:
        return "After"
    elif month==2 and day<18:
        return "Before"
    else:
        return "After"
month = int(input())
day = int(input())
print(solve(month,day))