#include <stdio.h>
int main ()
{
    int number;
    printf("Enter a number : ");
    scanf ("%d",&number);

    if (number%2==0)
        printf("The number is even ",number);
    else
        printf("The number is odd ",number);
}
