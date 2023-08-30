from cs50 import get_int

def print_pyramid(height):
    for i in range(height):
        spaces = " " * (height - i - 1)
        hashes = "#" * (i + 1)
        print(spaces + hashes)

def main():
    while True:
        height = get_int("Height: ")
        if height > 8 and height <= 0:
            height = get_int("Height: ")
        else:
            print_pyramid(height)
            break  # Sai do loop se a entrada for válida

main()