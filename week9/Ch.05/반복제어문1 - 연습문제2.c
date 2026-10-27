#include <stdio.h>

int main() {
    int num = 1;
    int sum;
    while(num<=10) {
        sum+=num;
        num++;
    }
    printf("sum = %d\nnum = %d",sum,num);
    return 0;
}