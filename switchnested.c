#include<stdio.h>
int main () {
    int day;
    printf("enter day as a number 1-7 : ");
    scanf("%d",&day);
    switch (day) {
       case 100 : printf("this is the part of outer switch\n");
       switch (day) {
        case 200 : printf("this is part of inner switch\n");
       }
    }
}
