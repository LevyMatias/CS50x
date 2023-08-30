from cs50 import get_int

def print_pyramid(height):
    for i in range(height):
        spaces = " " * (height - i - 1)
        hashes = "#" * (i + 1)
        print(spaces + hashes)

height = get_int("Height: ")
if height > 8 and height == 0:
    while True:
        height = get_int("Height: ")  # Solicita a altura da pirâmide ao usuário
        break

print_pyramid(height)