#include<stdio.h>
int main () {
    char ch;
    printf("eneter you charcter");
    scanf("%c",&ch);
    if (ch>='A' && ch <= 'Z') {
        printf("it's a capital latter charcter from english");
    }
    else if (ch>='a' && ch<='z') {
        printf("it's a small latter charcter from english");
    }
    else {
        printf("it's not an english alphebat");
    }


}
