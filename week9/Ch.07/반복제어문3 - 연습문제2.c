#include <stdio.h>

int main() {
    for(int i = 0; i < 6; i++) {
        for(int j = 0; (i<3 ? j <= i : j < (6-i)); j++) printf("*");
        printf("\n");
    }
    return 0;
}