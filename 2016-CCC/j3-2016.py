def front_solve(word):
    counter = 0
    new_word = word
    while len(word)!=counter:
        if new_word[::-1]==new_word:
            return len(new_word)
        elif len(new_word)==1:
            return 1    
        else:
            new_word = new_word[0:len(new_word)-1]
        counter+=1
    return len(new_word)
def back_solve(word):
    counter = 0
    new_word = word
    while len(word)!=counter:
        if new_word[::-1]==new_word:
            return len(new_word)
        elif len(new_word)==1:
            return 1    
        else:
            new_word = new_word[1:len(new_word)]
        counter+=1
    return len(new_word)

def both_solve(word):
    counter = 0
    new_word = word
    while len(word)!=counter:
        if new_word[::-1]==new_word:
            return len(new_word)
        elif len(new_word)==1:
            return 1    
        else:
            new_word = new_word[1:len(new_word)]
            new_word = new_word[0:len(new_word)-1]
        counter+=1
    return len(new_word)


word = input()
print(max(front_solve(word),back_solve(word),both_solve(word)))
