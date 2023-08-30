from cs50 import get_int

print()
def print_pyramid(height):
    for i in range(height):
        spaces = " " * (height - i - 1)
        hashes = "#" * (i + 1)
        print(spaces + hashes)
        print()

# main function
def main():
    while True:
        height = get_int("Height: ")
        if height <= 8 and not height <= 0:
            break  # Sai do loop se a entrada for válida
    print_pyramid(height)

main()
print()