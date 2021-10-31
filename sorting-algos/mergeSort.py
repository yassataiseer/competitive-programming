def solve(array):
    if(len(array)>1):
        midpoint = len(array)/2
        midpoint = int(midpoint)
        leftSide = array[0:midpoint]
        rightSide = array[midpoint:]
        solve(leftSide)
        solve(rightSide)
        leftPtr = 0
        rightPtr = 0
        index = 0
        while leftPtr<len(leftSide) and rightPtr<len(rightSide):
            if (leftSide[leftPtr]>rightSide[rightPtr]):
                array[index] = leftSide[leftPtr]
                leftPtr+=1
            else:
                array[index] = rightSide[rightPtr]
                rightPtr+=1
            index+=1
        while leftPtr<len(leftSide):
            array[index] = leftSide[leftPtr]
            leftPtr+=1
            index+=1
        while rightPtr<len(rightSide):
            array[index] = rightSide[rightPtr]
            rightPtr+=1
            index+=1            
    return array
    
print(solve([6,4,2,1,333,2,5555]))


