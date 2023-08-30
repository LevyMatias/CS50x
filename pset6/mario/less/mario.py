from cs50 import get_int

n = get_int("Height: ")

if n <= 8 and n != 0:
    for i in range(n):
        for j in range(n):
            print("#", end="")
        print()
else:
    while True:
        n = get_int("Height: ")
        if n <= 8 and n != 0:
            for i in range(n):
                for j in range(n):
                    print("#", end="")
                print()
            break  # Saia do loop após a entrada correta
