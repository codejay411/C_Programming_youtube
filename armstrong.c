#include<stdio.h>
#include<math.h>
// #include<conio.h>

int main(){
    int num,order=0,temp,r,sum=0;
    // clrscr();
    printf("Enter the number : ");
    scanf("%d", &num);
    temp=num;
    while(num>0){
        num=num/10;
        order++;
    }
    num=temp;
    while(num>0){
        r=num%10;
        sum=sum+pow(r,order);
        num=num/10;
    }
    if(sum==temp){
        printf("number is armstrong number");
    }
    else{
        printf("number is not armstrong  number ");
    }
    // getch();

}