#include <stdio.h>
#include <cs50.h>

int main(void) {
    int x = get_int("X: ");
    int y = get_int("Y: ");

    printf("%i\n", x+y);
}