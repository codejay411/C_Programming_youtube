#include<stdio.h>   // include header file
// #include<conio.h>

void main(){
    int num,i,fact=1    ;       // variable declaration
    // clrscr();
    printf("Enter the number: ");
    scanf("%d",&num);
    // logic for factorial number
    if(num<0){
        printf("Factorial of negative number is not found ");
    }
    else if(num==0){
        printf("Factorial of 0 is 1 ");
    }
    else{
        for(i=num;i>=1;i--){
            fact=fact*i;
        }
        printf("factorial of number is %d ",fact);
    }
    // getch();
}