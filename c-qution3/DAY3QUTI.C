#include<stdio.h>
#include<conio.h>
main(){
int r;
float pie=3.14;
float area;
clrscr();
printf("Enter your value");
scanf("%d",&r);
area=pie*r*r;
printf("%.2f",area);

getch();
}