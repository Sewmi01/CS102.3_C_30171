#include <stdio.h>
int main ()
{
    char empname [20];
    float bs,inc,ns;
    printf ("Enter employee name:");
    scanf("%s ",&empname);
    printf("Enter basic salary :");
    scanf("%f ",&bs);

    if (bs>=10000)
    inc=bs*0.05;
    else
    inc=bs*0.05;

    ns=bs+inc;
    printf("Employee Name %s \n",empname);
    printf("New Salary %.2f \n ",ns);
}
