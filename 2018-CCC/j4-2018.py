
def format(text):
    text = str(text)
    text = text.replace("[","")
    text = text.replace("]","")
    text = text.replace("'","")
    text = text.replace(",","")
    return text

def solve(table):
    grid = []
    for i in range(table):
        points = input()
        points = points.split(" ")
        grid.append(points)
    
    if table%2==0:
        for i in range(len(grid)):
            text = grid[i]
            print(format(text))
        exit()
    counter = 0
    while counter!= table:
        counter+=1
        



        
table = int(input())
solve(table)