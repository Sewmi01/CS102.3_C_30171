#include <stdio.h>
#include <stdlib.h>

int main()
{
   int month_no;
   printf("Enter a month number (1-12) = ");
   scanf("%d",&month_no);

   switch(month_no)
   {
   case 1:
       printf("Number of days in the %d st month is 31",month_no);
       break;

    case 2:
       printf("Number of days in the %d nd month is 28",month_no);
       break;

    case 3:
       printf("Number of days in the %d rd month is 31",month_no);
       break;

    case 4:
       printf("Number of days in the %d th month is 30",month_no);
       break;

    case 5:
       printf("Number of days in the %d th month is 31",month_no);
       break;

    case 6:
       printf("Number of days in the %d th month is 30",month_no);
       break;

    case 7:
       printf("Number of days in the %d th month is 31",month_no);
       break;

    case 8:
       printf("Number of days in the %d th month is 31",month_no);
       break;

    case 9:
       printf("Number of days in the %d th month is 30",month_no);
       break;

    case 10:
       printf("Number of days in the %d th month is 31",month_no);
       break;

    case 11:
       printf("Number of days in the %d th month is 30",month_no);
       break;

    case 12:
       printf("Number of days in the %d th month is 31",month_no);
       break;
   }

    return 0;
}
