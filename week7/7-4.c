#include <stdio.h>
#define MAX 50

void BubbleSort(int *p, int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(*(p+j) < *(p+j+1)) {
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    if(n<=MAX) {
        int score[MAX];
        int *p;
        for(int i = 0; i < n; i++) {
            scanf("%d",&score[i]);
        }
        p = &score[0];
        BubbleSort(p,n);

        for(int i = 0; i < n; i++) printf("%3d ",*(p+i));
        printf("\n");
        printf("최고 성적 : %d\n",*p);
        printf("최하 성적 : %d\n",*(p+n-1));


    } else {
        printf("잘못된 수가 입력되어 프로그램을 종료합니다.");;
    }

    return 0;
}