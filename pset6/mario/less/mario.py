from cs50 import get_int

n = get_int("Height: ")
while n < 8 and not n == 0:
    for i in range(8):
        for j in range(8):
            print("#", end="")
        print()