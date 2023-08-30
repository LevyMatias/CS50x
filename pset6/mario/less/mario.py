from cs50 import get_int

def print_pyramid(height):
    for i in range(height):
        spaces = " " * (height - i - 1)
        hashes = "#" * (i + 1)
        print(spaces + hashes)

def main():
    height = get_int("Height: ")
    while True:
        height = get_int("Height: ")
        if height > 8 or height == 0:
    print_pyramid(height)

main()