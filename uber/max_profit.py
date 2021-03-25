def find_best_sum(track):
    profits = 0
    for i in range(len(track)):
        for j in range(len(track)):
            if track[j]-track[i]>profits:
                profits = track[j]-track[i]
    return profits
print(find_best_sum([10, 7, 5, 8, 11, 9]))