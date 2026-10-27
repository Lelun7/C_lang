#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("1. ADD\n2. EDIT\n3. DEL\n");
    switch(n) {
        case 1:
            printf("You selected ADD.");
            break;
        case 2:
            printf("You selected EDIT.");
            break;
        case 3:
            printf("You selected DEL.");
            break;
        default:
            printf("Wrong choice.");
    }
    return 0;
}