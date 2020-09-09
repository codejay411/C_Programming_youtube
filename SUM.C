#include<stdio.h>
#include<conio.h>
void main(){
	int num1,num2,c;
	clrscr();
	printf("enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	c=num1+num2;
	printf("sum of %d and %d is %d",num1,num2,c);
	getch();

}