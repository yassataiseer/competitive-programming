def solve(quarters,mach1,mach2,mach3):
    machine_number = 1
    amount = 0
    while quarters!=0:
        if machine_number==1:        
            quarters-=1
            mach1+=1
            if mach1%100==0:
                quarters+=60
                mach1=0
            machine_number+=1
            amount+=1

        elif machine_number==2:
            quarters-=1
            mach2+=1
            if mach2%35==0:
                quarters+=30
                mach2 = 0
            machine_number+=1
            amount+=1
        else:
            quarters-=1
            mach3+=1
            if mach3%10==0:
                quarters+=9
                mach3=0
            machine_number=1
            amount+=1
    return amount

quarters = int(input())
mach1 = int(input())
mach2 = int(input())
mach3 = int(input())

print("Martha plays "+str(solve(quarters,mach1,mach2,mach3))+" times before going broke.")     

