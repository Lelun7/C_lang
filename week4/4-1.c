#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int answer;
    int num;
    int count = 0;

    srand(time(NULL));

    answer = rand() % 100 + 1;

    printf("1부터 100사이의 숫자를 맞춰보세요!\n");

    while(1) {
        count++;
        printf("숫자 입력: ");
        scanf("%d",&num);
        if(num<1||num>100) {
            printf("숫자를 다시입력하세요.\n");
            continue;
        }

        if(num==answer) {
            printf("정답입니다.\n%d번째에 맞췄습니다.",count);
            break;
        } else if (num<answer) printf("더 큰 수입니다.\n");
        else if (num>answer) printf("더 작은 수입니다.\n");
    }
}