#include "stdio.h"
#include "conio.h"
#include "math.h"
main()
{float a,b,c,x1,x2,q;
clrscr();
printf("\tMENCARI PERSAMAAN KUADRAT\n\n");
printf("Bilangan A=");scanf("%f",&a);
printf("Bilangan B=");scanf("%f",&b);
printf("Bilangan C=");scanf("%f",&c);
printf("\n");
q=sqrt(b*b-4*a*c);
x1=(-b+q)/(2*a);
x2=(-b-q)/(2*a);
printf("X1 =%0.2f\n",x1);
printf("X2 =%0.2f\n",x2);
printf("Jadi himpunan penyelesaianya adalah {%0.2f,",x1);
printf("%0.2f}",x2);
getch();
}
