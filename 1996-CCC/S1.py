def solve(sentence):
    sentence = sentence.split(" ")
    answer = ""
    for words in sentence:
        if len(words)==4:
            answer+= (len(words)*"*")+" "
        else:
            answer+= words+" "
    return answer

answers = []
sentence_num = int(input())
for i in range(sentence_num):
    sentence = input()
    answers.append(solve(sentence))
for sentence in answers:
    print(sentence)



