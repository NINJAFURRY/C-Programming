#include<stdio.h>
int main () {
    int day;
    printf("enter the number 1-7 for day : ");
    scanf("%d",&day);
    switch (day) {
        case 1 : printf("today is monday\n");
        if (day>1 && day<3) {
            printf("today is raining\n");
        }
        else {
            printf("today is not raining\n");
        }
        break;
        case 2: printf("today is tuesday\n");
        if (day>4 && day<8) {
            printf("snowing\n");
        }
        else {
            printf("not snowing\n");
        }
        break;
        default : printf("wrong inpur cross check\n");
    }
}