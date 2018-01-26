#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
printf("please enter two numbers");
scanf("%d%d",&x,&y);
printf("before swaping \n x=%d \n y=%d\n",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("after swaping: x=%d , y=%d",x,y) ;
getch();

}