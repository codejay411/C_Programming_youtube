#include<stdio.h>
// #include<conio.h>

void main(){
    int num,temp,pal=0,r;
    // clrscr();
    printf("Enter the number : ");
    scanf("%d", &num);
    temp=num;
    while(num>0){
        r=num%10;
        pal=pal*10+r;
        num=num/10;
    }
    if(temp==pal){
        printf("this is palindrome number ");
    }
    else{
        printf("this is not palindrome number ");
    }
    // getch();


}