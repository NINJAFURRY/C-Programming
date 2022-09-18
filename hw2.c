#include<stdio.h>
#include<math.h>
int main () {
    char x;
    printf("Enter you digit or character :");
    scanf("%c",&x);
    printf("%c\n",x);
    printf("%d\n",x);
    int y = x<0 && x>9;
    printf("%d\n",y);
    return 0;
}