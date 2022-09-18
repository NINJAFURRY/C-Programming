#include<stdio.h>
int main () {
    int age;
    printf("enter you age :");
    scanf("%d",&age);
    age >= 18 ? printf("adult\n") : printf("you are not an adult\n");
}