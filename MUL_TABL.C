#include<stdio.h>
#include<conio.h>
void main(){
	int num,i;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=1;i<11;i++){
		printf("%d X %d = %d\n",num,i,num*i);
	}
	getch();
}