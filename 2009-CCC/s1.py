def solve(min_value,max_value):
    final_answer = 0
    answers = []
    while min_value<max_value:
    
        if min_value*min_value in answers and min_value*min_value<max_value:
            final_answer+=1
        answers.append(min_value*min_value)
        if min_value*min_value*min_value in answers and min_value*min_value*min_value<max_value:
            final_answer+=1
        answers.append(min_value*min_value*min_value)
        min_value+=1
    return final_answer 
min_value = int(input())
max_value = int(input())
print(solve(min_value,max_value))