#include<stdio.h>
int main () {
    int x,y;
    printf("enter the number x : ");
    scanf("%d",&x);
    printf("enter  the number y :");
    scanf("%d",&y);
    if (x<y) {
        printf("x is small");
    }
    else {
        printf("y is small");
    }
}