#include <stdio.h>
int main()
{
    int n;
    printf ("Enter a number:");
    scanf ("%d",&n);
    switch (n%2)
    {
        case 0:printf ("The number is even \n");break;
        case 1:printf("The number is odd \n");break;
    }
}
