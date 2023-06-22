#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    // Copy string into memory
    strcpy(t, s);

    // Capitalize copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}

/*int main(void)
{
     char *s = get_string("s: ");
     char *t = malloc(strlen(s) + 1);
     if (t == NULL)
     {
          return 1;
     }
     for (int i = 0, n = strlen(s); i < n + 1; i++)
     {
          t[i] = s[i];
     }
     if (strlen(t) > 0)
     {
          t[0] = toupper(t[0]);
     }
     printf("s: %s\n", s);
     printf("t: %s\n", t);
     free(t);
}*/