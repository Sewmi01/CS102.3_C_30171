#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,ans;
    int operation;
    printf("Enter your first number = ");
    scanf("%f",&n1);
    printf("Enter your second number = ");
    scanf("%f",&n2);

    printf("operations\n");
    printf("Addition(+) ---------> 1\n");
    printf("Subtraction(-) ------> 2\n");
    printf("Multiplication(*) ---> 3\n");
    printf("Division(/) ---------> 4\n");
    printf("Choose the number of the operation you want : ");
    scanf("%d",&operation);

    switch(operation)
    {
    case 1:
        ans=n1+n2;
        printf("Answer is %.2f",ans);
        break;

    case 2:
        ans=n1-n2;
        printf("Answer is %.2f",ans);
        break;

    case 3:
        ans=n1*n2;
        printf("Answer is %.2f",ans);
        break;

    case 4:
        ans=n1/n2;
        printf("Answer is %.2f",ans);
        break;
    }
    return 0;
}
