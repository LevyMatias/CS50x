# Exercício 2: Mario(versão desafiadora)
from cs50 import get_int

def double_pyramid(height):
    for i in range(height):
        spaces = " " * (height - i - 1)
        hashes = "#" * (i + 1)
        print(spaces + hashes + "  " + hashes)

def main():
    while True:
        height = get_int("Height: ")
        if height <= 8 and not height <= 0:
            break  # Sai do loop se a entrada for válida

    double_pyramid(height)

# main function
main()