from cs50 import get_string

before = input("Before: ")
print("After:  ", end="")
for c in before:
    print(c.upper(), end="")
print()