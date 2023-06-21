#include <cs50.h>
#include <stdio.h>

int EX1(void)
{
    string s = "HI!";
    printf("%s\n", s);
}

// Pointer arithmetic
int EX2(void)
{
    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
}