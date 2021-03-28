#COCI '16 Contest 3 #1 Imena
def main(sentence_count, sentences):
    amounts = []
    fragments = break_sentence(sentences)
    for stuff in fragments:
        amounts.append(solve_sentence(stuff))
    return amounts


def solve_sentence( sentence):
    sentence_amount = 0
    sentence = sentence.split(" ")
    uppercases = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    numbers = "1234567890"
    for words in sentence:
        scnd_counter = 0
        for letter in words:
            if letter in uppercases:
                scnd_counter+=1
            elif letter in numbers:
                scnd_counter = 0
                pass
        if scnd_counter == 1:
            sentence_amount+=scnd_counter
    return sentence_amount


def break_sentence(sentences):
    counter = []
    stuff = ""
    for i in sentences:
        if i =="?" or i =="." or i == "!":
            counter.append(stuff)
            stuff = ""
        else:
            stuff += i
    return counter

sentence_count = int(input())
sentences = input()
answer = main(sentence_count,sentences)
for i in answer:
    print(i)
#print(break_sentence("An4 voli Milovana? Ana nabra par Banana."))
#print(solve_sentence("An4 voli Milovana? Ana nabra par Banana."))
