#include<stdio.h>
//check it's a character or digit
int main () {
    char ch;
    printf("enter you char : ");
    scanf("%c",&ch);
    //first method
    printf("0 means character 1 means digit =%d\n",ch>=48 && ch <57);
    //second method
    if (ch>=48 && ch <=57) {
        printf("it's a digit");
    }
    else {
        printf("it's a character");
    }
}