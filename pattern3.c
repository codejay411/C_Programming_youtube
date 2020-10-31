#include<stdio.h>
// #include<conio.h>

void main(){
    int num,i,j;
    // clrscr();
    printf("Enter the number of rows : ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<(num-i);j++){
            printf("* ");
        }
        printf("\n");
    }
    // getch();
}