#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number > 0:
    result = number % 10
else:
    result = -(-number % 10)
print(f"Ldigit of {number} is {result}", end=" ")
if result > 5:
    print("and is > than 5")
elif result == 0:
    print("and is 0")
else:
    print("and is <  than 6 and not 0")
