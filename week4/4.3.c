#include <stdio.h>

int main(void)
{
    char s[10];
    printf("Enter string: ");
    scanf("%[aeiou]", s);
    printf("The input was \"%s\"\n", s);
    return 0;
}
