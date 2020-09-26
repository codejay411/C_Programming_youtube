#include<stdio.h>
// #include<conio.h>

void main(){
    int a,b;
    // clrscr();
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("value of a is %d ",a);
    printf("\n value of b is %d",b);
    // getch();
}