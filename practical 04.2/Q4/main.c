#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter your character ");
    scanf("%c",&x);

    switch(x)
    {
    case 'a':
        printf("%c is a vowel",x);
        break;

    case 'A':
        printf("%c is a vowel",x);
        break;

    case 'e':
        printf("%c is a vowel",x);
        break;

    case 'E':
        printf("%c is a vowel",x);
        break;

    case 'i':
        printf("%c is a vowel",x);
        break;

    case 'I':
        printf("%c is a vowel",x);
        break;

    case 'o':
        printf("%c is a vowel",x);
        break;

    case 'O':
        printf("%c is a vowel",x);
        break;

    case 'u':
        printf("%c is a vowel",x);
        break;

    case 'U':
        printf("%c is a vowel",x);
        break;

    default:
        printf("%c is not a vowel",x);
    }
    return 0;
}
