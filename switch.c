#include<stdio.h>
int main () {
    int day;
    printf("enter day 1-7 : ");
    scanf("%d",&day);

    switch (day) {
        case 1 : printf("Today is monday\n");
        break;
        case 2 : printf("Today is tuesday\n");
        break;
        case 3 : printf("Today is wednesday\n");
        break;
        case 4 : printf("Today is thrusday\n");
        break;
        case 5 : printf("Today is friday\n");
        break;
        case 6 : printf("Today is sturday\n");
        break;
        case 7 : printf("Today is sunday\n");
        break;
        default : printf("invalid input\n");
       
    }
}