#include <stdio.h>
#define NUM 5

int main() {

    for(int i = 0; i < NUM; i++) {
        for(int j = 0; j < NUM-i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}