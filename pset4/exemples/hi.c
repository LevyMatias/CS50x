#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string str = "HI!";
    printf("%s\n", str);

    // Pointer arithmetic
    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}