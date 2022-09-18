#include<stdio.h>
/* if it's monday or it's raining -> true
isMondaY = 0 - today is not monday
isRaining = 1 - but today is raining */
int main () {
    int isMonday = 0;
    int isRaining = 1;
    printf("%d\n",isMonday || isRaining);
}