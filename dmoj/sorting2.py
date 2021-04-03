def solve(array):
    attempts = len(array)
    for tries in attempts:
        pass
def sort(array):
    previous_data = [0]
    for stuff in array:
        if array.index(stuff)==0:
            pass
        else:
            if previous_data[-1]>stuff:
                location_previous = previous_data[-1]
                current_location = array.index(stuff)
                array[location_previous],array[current_location] = array[current_location],array[location_previous]
                previous_data[-1] = current_location
                print(previous_data[-1])
    return array


print(sort([2,1,6,5,8,7,9]))