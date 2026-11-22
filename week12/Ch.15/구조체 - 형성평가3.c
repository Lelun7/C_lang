#include <stdio.h>

typedef struct {
    int x1;
    int y1;
    int x2;
    int y2;
} rectangle;

int max(int a, int b) {
    if(a>b) return a;
    return b;
}

int min(int a, int b) {
    if (a>b) return b;
    return a;
}

int main() {
    rectangle r[2];
    for(int i = 0; i < 2; i++) scanf("%d %d %d %d",&r[i].x1,&r[i].y1,&r[i].x2,&r[i].y2);

    printf("%d %d %d %d",min(r[0].x1,r[1].x1),min(r[0].y1,r[1].y1),max(r[0].x2,r[1].x2),max(r[0].y2,r[1].y2));

    return 0;
}