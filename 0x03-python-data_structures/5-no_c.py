#!/usr/bin/python3
def no_c(my_string):
    my_string = [x for x in my_string if x != 'c' and x != 'C']
    return ("".join(my_string))
