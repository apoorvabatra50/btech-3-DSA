#include<stdio.h>
#include<conio.h>
void main() {
int a[100],l,c,p,e;
clrscr();
printf("please enter the length of the array\n") ;
scanf("%d",&l) ;
printf("\nenter %d no. of elements\n",l);
for(c=0;c<l;c++)
{
scanf("%d",&a[c]);

}//end of for


printf("\nplease enter the position where you wish to insert the element\n") ;
scanf("%d",&p);
printf("\nplease inter the element you wish to insert\n");
scanf("%d",&e);
for(c=l-1;c>=p-1;c--)
	     a[c+1] =a[c,];

//end of for
a[p-1]=e;
printf("\nthe resultant array is\n");
for(c=0;c<=l;c++)
printf("%d\n",a[c]);



getch();
} //end main
