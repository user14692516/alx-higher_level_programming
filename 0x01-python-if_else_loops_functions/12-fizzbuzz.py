#!/usr/bin/python3
def fizzbuzz():
    for a in range(1, 101):
        result = ""
        if(a % 3 == 0):
            result += "Fizz"
        if(a % 5 == 0):
            result += "Buzz"
        print("{}".format(result) or "{}".format(a), end='')
        print(" ", end='')
