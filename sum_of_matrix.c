#include<stdio.h>
// #include<conio.h>

void main(){
    int a[10][10],b[10][10],c[10][10],i,j;
    // clrscr();
    printf("enter the element for matrix 1 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element for matrix 2 : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // sum of matrix
    printf("Sum of matrix : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    // getch();
}