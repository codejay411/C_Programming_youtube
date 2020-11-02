#include<stdio.h>
// #include<conio.h>

void main(){
    int jay[20],num,i;
    // clrscr();
    printf("Enter the number of elements : ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&jay[i]);
    }
    printf("The given array : ");
    for(i=0;i<num;i++){
        printf("%d ,",jay[i]);
    }
    // getch();

}