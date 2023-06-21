#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = get_int("s: ");
    char *t = get_int("t: ");
    if (s == t)
    {
         printf("Same\n");
    }
    else
    {
         printf("Different\n");
    }
}