answer = 0
data = []
rows = int(input())
columns = int(input())
for i in range(rows):
    data.append(list(columns*"B"))
row_strokes = []
columns_strokes = []
strokes = int(input())
for i in range(strokes):
    counter = 0
    brush = input()
    if brush[0]=="R":
        for letters in data[int(brush[-1])-1]:
            if letters=="B":
                data[int(brush[-1])-1][counter]="G"
                answer+=1
            elif letters=="G":
                data[int(brush[-1])-1][counter]= "B"
                answer-=1
            counter +=1
    elif brush[0]=="C":
        for rows in data:
            if rows[int(brush[-1])-1]=="G":
                rows[int(brush[-1])-1]="B"
                answer-=1
            elif rows[int(brush[-1])-1]=="B":
                rows[int(brush[-1])-1]="G"
                answer+=1
'''    
for stuff in data:
    for other in stuff:
        if other=="G":
            answer +=1'''
print(answer)