#include <stdio.h>

int main() {
    int height,weight,result;
    scanf("%d %d",&height,&weight);
    result = weight + 100 - height;
    printf("%d\n",result);
    if(result > 0) printf("Obesity\nNeed control");
    return 0;

}