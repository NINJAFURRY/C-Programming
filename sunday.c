#include<stdio.h>
/*Print 1(true) or 0(false) for following statements:
a= if it's sunday & it's snowing -> true 
issunday =1 means it's sunday and issnowing =1 then it's snowing or it's value is 0 then
it's  not snowing*/
int main () { 
    int isSunday = 0;
    int isSnowing = 1;
    printf("%d\n",isSunday && isSnowing);
    return 0;
}