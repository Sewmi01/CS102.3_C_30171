#include <stdio.h>
int main()
{
    int n1,n2,n3,max,min;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    max = n1;
    min = n1;
    if (n2>max)
        max =n2;

    else
        min = n2;

        if (n3>max)
            max=n3;

        else
            min=n3;

    printf("The highest is %d \n",max);
    printf("The smallest is %d \n",min);

}
