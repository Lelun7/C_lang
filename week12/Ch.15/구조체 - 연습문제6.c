#include <stdio.h>

typedef struct {
    int x;
    int y;
} pos;

int main() {
    pos p1;
    pos p2;
    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);

    printf("Center point = (%.1f, %.1f)",((float)p1.x+p2.x)/2,((float)p1.y+p2.y)/2);

    return 0;
}