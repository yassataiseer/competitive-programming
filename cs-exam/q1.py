#A function to check if an integer number is positive,
#negative or zero


def Check_num(num):
    answer = "zero"
    while num != 0:
        if num>0:
            answer = "positive"
        else:
            answer = "negative"
    return answer