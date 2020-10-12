#include<stdio.h>
#include<math.h>
// #include<conio.h>

void main(){
    float a,b,c,d,r1,r2,real,img;
    // clrscr();
    printf("Enter the value of a,b,c for ax*2+bx+c : ");
    scanf("%f%f%f",&a ,&b, &c);
    d=b*b - 4*a*c;
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r1=(-b-sqrt(d))/(2*a);
        printf("roots r1 and r2 is %.2f and %.2f ",r1,r2);
    }
    else if(d==0){
        r1=r2=-b/(2*a);
        printf("roots r1 and r2 is %.2f and %.2f ",r1,r2);
    }
    else{
        real=-b/(2*a);
        img=sqrt(-d)/(2*a);
        printf("roots r1 and r2 is %.2f+i%.2f and %.2f-i%.2f ",real,img,real,img);
    }
    // getch();
}
