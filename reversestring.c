#include<stdio.h>
// #include<conio.h>

void main(){
    char jay[10],t;
    int i,j;
    // clrscr();
    printf("Enter the string :");
    scanf("%s",jay);
    for(j=0;jay[j]!='\0';j++)
    {}
    j=j-1;
    for(i=0;i<j;i++,j--){
        t=jay[i];
        jay[i]=jay[j];
        jay[j]=t;
    }
    printf("Reverse string is : %s ",jay);
    // getch();
}