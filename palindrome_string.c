#include<stdio.h>
#include<string.h>
// #include<conio.h>

void palindrome(char s[]){
    int first=0;
    int last=strlen(s)-1;
    while(last>1){
        if(s[first++] != s[last--]){
           printf("This is not palindrome string ");
           return;
        }
    }
    printf("This is palindrome string ");
}

void main(){
    char s[100];
    // clrscr();
    printf("Enter the string : ");
    scanf("%s",&s);
    palindrome(s);
    // getch();
}