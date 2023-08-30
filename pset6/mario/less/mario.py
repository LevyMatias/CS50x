from cs50 import get_int

def print_pyramid(height):
    for i in range(height):
        spaces = " " * (height - i - 1)
        hashes = "#" * (i + 1)
        print(spaces + hashes)

n = get_int("Height: ")
if n <= 8 and n != 0:
    while True:
        height = int(get_int("Height: "))  # Solicita a altura da pirâmide ao usuário
        break

print_pyramid(height)