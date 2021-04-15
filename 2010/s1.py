def solve(data):
    records = {}
    for rows in data:
        records[rows[0]] = int(rows[1])*2+int(rows[2])*3+int(rows[3])
    return records

dict1 = solve([["DEF","10","20","30"],["CAD","10","20",1],["ABD","10","20","30"]])
sorted_tuples = sorted(dict1.items(), key=lambda item: item[1])
sorted_dict = {k: v for k, v in sorted_tuples}
amount = []
current = max(sorted(sorted_dict))
x = sorted_dict.pop(current)
print(x)
current = max(sorted(sorted_dict))
x = sorted_dict.pop(current)
print(x)