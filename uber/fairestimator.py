def fareEstimator(ride_time, ride_distance, cost_per_minute, cost_per_mile):
    answer = []
    for i in range(len(cost_per_minute)):
        answer.append((ride_time*cost_per_minute[i])+(ride_distance*cost_per_mile[i]))
    return answer