#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || (year%400==0)) {
        printf("%d년은 윤년입니다.",year);
    } else {
        printf("%d년은 윤년이 아닙니다.",year);
    }

    return 0;
}