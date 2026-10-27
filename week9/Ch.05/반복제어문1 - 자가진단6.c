#include <stdio.h>

int main() {
    while(1) {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? \n");
        int n;
        scanf("%d",&n);
        if(n>=1&&n<=4) {
            switch(n) {
                case 1:
                    printf("Seoul\n");
                    break;
                case 2:
                    printf("Washington\n");
                    break;
                case 3:
                    printf("Tokyo\n");
                    break;
                case 4:
                    printf("Beijing\n");
                    break;
            }
        } else {
            printf("none\n");
            break;
        }
        printf("\n");
    }
    return 0;
}