#!/usr/bin/python3
def uppercase(str):
    uppercase = 0
    for a in str:
        if(ord(a) >= 97 and ord(a) <= 122):
            uppercase = 32
        else:
            uppercase = 0
        print("{}".format(chr(ord(a) - uppercase)), end='')
