#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    
    printf("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
    return 0;
}