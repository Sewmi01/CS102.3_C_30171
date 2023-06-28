#include <stdio.h>
#include <stdlib.h>

int main()
{
   float radius,circumference,area,volume;
   int n;
   printf("Choose what you want to calculate (1,2 or 3)\n");
   printf("(1) Circumference of a circle\n");
   printf("(2) Area of a circle\n");
   printf("(3) Volume of a sphere\n");
   scanf("%d",&n);
   printf("Enter the radius = ");
   scanf("%f",&radius);

   switch(n)
   {
   case 1:
       circumference=2*3.14159*radius;
       printf("The circumference of the circle is %.2f",circumference);
       break;

   case 2:
       area=3.14159*radius*radius;
       printf("The area of the circle is %.2f",area);
       break;

   case 3:
       volume=4*3.14159*radius*radius*radius/3;
       printf("The volume of the sphere is %.2f",volume);
       break;

   }

    return 0;
}
