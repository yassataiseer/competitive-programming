

def find_best_sum_2(track):
    best_high = max(track)
    new_market = track[0:track.index(best_high)]
    if track.index(best_high)==0:
        return -1
    return best_high - min(new_market)
print(find_best_sum_2([10, 9, 7, 6, 4]))
