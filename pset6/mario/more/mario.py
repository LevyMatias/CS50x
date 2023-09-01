# Exercício 2: Mario(versão desafiadora)
# main function
def main():
    while True:
        height = get_int("Height: ")
        if height <= 8 and not height <= 0:
            break  # Sai do loop se a entrada for válida
    print_pyramid(height)

main()