#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        int max = i;
        for(int j = i+1; j < size; j++) {
            if(arr[j] > arr[max]) max = j;
        }
        if(max!=i) swap(&arr[i],&arr[max]);
    }
}

int main() {
    int arr[20];
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) scanf("%d",&arr[i]);
    sort(arr,n);
    for(int i = 0; i < n; i++) printf("%d\n",arr[i]);
    return 0;
}