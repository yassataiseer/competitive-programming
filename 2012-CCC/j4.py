def solve(shift,word):
    answer = ""
    word_chart = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
    for letters in range(len(word)):
        #word_index = word_chart.index(word[letters])
        S = shift*(letters+1)+shift#6
        word_index = S+(word_chart.index(word[letters])+1)
        while word_index>=26:
            word_index-=26
        answer+= word_chart[word_index]
    return answer
print(solve(3,"ZOOM"))

