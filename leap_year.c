#include<stdio.h>
// #include<conio.h>

void main(){
    int year;
    // clrscr();
    printf("Enter the year : ");
    scanf("%d", &year);
    if((year%400==0) || ((year%4==0) && (year%100!=0))){
        printf("Given year is leap year");
    }
    else{
        printf("Given year is not leap year");
    }
    // getch();
}