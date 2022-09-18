#include<stdio.h>
/* if a number is greater then 9 & less then 100 then print true
this can also prefer as check it's a two digit number or not*/
int main () {
    int x;
    printf("Enter a two digit number");
    scanf("%d",&x);
    printf("%d\n",x>9 && x<100);
    return 0;
}