def solve(a,b,c,d,s):
    B_count = 0
    B_loc = 0
    N_count = 0
    N_loc = 0
    back_or_front = 0
    if a>c and b==d:
        return "Nikky"
    elif a<c and b==d:
        return "Byron"
    while N_count<=s:
        if back_or_front%2==0:
            back_or_front+=1
            N_count+=a
            N_loc+=a
        elif back_or_front%2!=0:
            back_or_front+=1
            N_count+=b
            N_loc-=b
    amount_min = N_count-s
    N_loc -= amount_min
    back_or_front=0
    while B_count<=s:
        if back_or_front%2==0:
            back_or_front+=1
            B_count+=c
            B_loc+=c
        elif back_or_front%2!=0:
            back_or_front+=1
            B_count+=d
            B_loc-=d
    amount_min = B_count-s
    B_loc -= amount_min
    if B_loc>N_loc:
        return "Byron"
    elif B_loc<N_loc:
        return "Nikky"
    else:
        return "Tied"



a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())
print(solve(a,b,c,d,s))



