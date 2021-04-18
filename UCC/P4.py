def solve(prices):
    possible_price = []
    for amount in range(len(prices)):
        current_sum = 0
        three_sum = 0
        try:
            if len(prices[amount:amount+3])!=3:
                pass
            else:
                three_sum+=sum(prices[amount:amount+3])
                three_sum-=0.5*min(prices[amount:amount+3])
                three_sum+=sum(prices[0:amount])
                three_sum+=sum(prices[amount+2:-1])
                possible_price.append(int(three_sum))
        except IndexError:
            pass
        three_sum = 0
        try:
            if len(prices[amount:amount+2])!=2:
                pass
            else:
                three_sum+=sum(prices[amount:amount+2])
                three_sum-=0.25*min(prices[amount:amount+2])
                three_sum+=sum(prices[0:amount])
                three_sum+=sum(prices[amount+1:-1])
                possible_price.append(int(three_sum))
        except IndexError:
            pass         
    return min(possible_price)
prices = []
amounts = int(input())
for i in range(amounts):
    price = int(input())
    prices.append(price)

print(solve(prices))


