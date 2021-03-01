#include<stdio.h>
// #include<conio.h>

void main(){
    int a[10][10],b[10][10],c[10][10],i,j,k;
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
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    printf("result matrix is");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",c[i][j]);
        }
    }
    // getch();
}