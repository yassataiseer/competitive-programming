
def func(withdraw,total):
    while withdraw<total:
        if withdraw%5==0:
            return total-withdraw-0.5
        else:
            return total
    return total


query = input()
withdraw,total = query.split(' ')
print(func(int(withdraw),float(total)))