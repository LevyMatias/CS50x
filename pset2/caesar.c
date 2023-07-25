#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char encrypt_cesar(char plain_text, int shift) {
    if (!isalpha(plain_text))
        return plain_text;

    char encrypt_char = toupper(plain_text) + shift;
    if (encrypt_char > 'Z')
        encrypt_char = encrypt_char - 26;

    if (islower(plain_text))
        encrypt_char = tolower(encrypt_char);

    return encrypt_char;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    char *p;
    int shift = strtol(argv[1], &p, 10);
    if (*p != '\0') {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    shift %= 26;

    char plain_text[100];
    printf("plaintext: ");
    scanf("%[^\n]s", plain_text);
    int length = strlen(plain_text);
    char cipher_text[length + 1];

    for (int i = 0; i < length; i++)
        cipher_text[i] = encrypt_cesar(plain_text[i], shift);
    cipher_text[length] = '\0';
    printf("ciphertext: %s\n", cipher_text);

    return 0;
}




