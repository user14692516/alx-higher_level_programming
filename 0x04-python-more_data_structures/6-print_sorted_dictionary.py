#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    ""
    Printing a dictionary ordered by key in alphabetical order
    ""
    sorted_dict = {x: a_dictionary[x] for x in sorted(a_dictionary)}
    for i in sorted_dict.keys():
        print("{}: {}".format(i, sorted_dict[i]))
