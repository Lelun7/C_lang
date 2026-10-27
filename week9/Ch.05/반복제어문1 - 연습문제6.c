#include <stdio.h>

int main() {
    while(1) {
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\nEnter number: \n");
        int n;
        scanf("%d",&n);
        if(n>=1 && n<=4) {
            printf("You selected ");
            if(n==1) printf("Input.\n");
            else if(n==2) printf("Output.\n");
            else if(n==3) printf("Delete.\n");
            else {
                printf("Finish.\n");
                break;
            }
        } else printf("Wrong input.\n");
        printf("\n");
    }
    return 0;
}