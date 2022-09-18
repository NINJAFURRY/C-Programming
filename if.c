#include<stdio.h>
int main () {
    int age;
    printf("enter you age : ");
    scanf("%d",&age);
    if (age >= 18 && age <= 40) {
        printf("you are an adult\n");
    }
    else if (age <= 18 ) {
        printf("you are a child go play at park\n");
    }
    else {
        printf("you are not an adult go check your self\n");
    }
    return 0;
}