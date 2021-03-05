def solve(word):
    answer = ""
    consonant = "bcdfghjklmnpqrstvwxyz"
    closestVowel =  "aaeeeiiiiooooouuuuuuu"
    nextConsonant = "cdfghjklmnpqrstvwxyzz"
    for i in range(len(word)):
        if word[i] in closestVowel:
            answer +=word[i]
        else:
            closestconst = consonant.find(word[i])
            answer = answer + word[i] + closestVowel[closestconst] + nextConsonant[closestconst]

    return answer





word = input()
print(solve(word))