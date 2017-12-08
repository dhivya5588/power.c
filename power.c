#include<stdio.h>
#include<conio.h>
void main()
{
int n,p,i,c=1;
printf("enter the number");
scanf("%d",&n);
printf("enter the power");
scanf("%d",&p);
for(i=0;i<p;i++)
{
c=n*c;
}
printf("%d",&c);
getch();
}
