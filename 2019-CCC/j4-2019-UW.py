#this is also s1
def flipper(query):
    line1 = [1,2]
    line2 = [3,4]
    for i in query:
        if i =="H":
            line1,line2 = line2,line1
        else:
            line1 = line1[::-1]
            line2 = line2[::-1]
    print (str(line1[0]) + " " + str(line1[1]))
    print (str(line2[0]) + " " + str(line2[1]))
            




query = input()
flipper(query)