#include<stdio.h>
int main () {
    int num;
    printf("enter a number to check it's a two digit and even or odd number : ");
    scanf("%d",&num);
    if (num > 9 || num <= 0) {
        printf("It's a two digit number\n");
        if (num%2==0) {
            printf("it's an even number\n");
        }
        else {
            printf("it's a odd number\n");
        }
    }
    else {
        printf("It's not a two digit number\n");
    }
}