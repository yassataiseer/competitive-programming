import csv
import pandas as pd  

def isPrime(n) :
    if (n <= 1) :
        return False
    if (n <= 3) :
        return True
    if (n % 2 == 0 or n % 3 == 0) :
        return False
    i = 5
    while(i * i <= n) :
        if (n % i == 0 or n % (i + 2) == 0) :
            return False
        i = i + 6
        return True
def isOdd(n):
    if n%2==0:
        return False
    else:
        return True
set1 = []
set2 = []
set3 = []
import matplotlib.pyplot as plt
counter = 0
prev_term = 0
while 500000>counter:
    counter+=1
    if isPrime(counter):
        set1.append(counter)
        if prev_term==0:
            prev_term = counter
            set3.append(prev_term)
        else:
            prev_term = counter-prev_term
            set3.append(prev_term)
    if isOdd(counter):
        set2.append(counter)
fields = ["Prime Factors","Difference in Factors"] 
set4 = [set1,set3]
plt.ylabel('some numbers')
plt.plot(set1)
plt.plot(set2)
plt.plot(set3)
dict = {'Prime': set1, 'Prime_diff': set3}  
df = pd.DataFrame(dict) 
df.to_csv('data1.csv') 
#plt.show()
