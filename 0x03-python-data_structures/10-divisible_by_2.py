#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    recent = []
    for a in range(len(my_list)):
        if my_list[a] % 2 == 0:
            recent.append(True)
        else:
            recent.append(False)
    return (recent)
