#include <stdio.h>

void InsertionSort(int arr[], int n) {
    int i,j,key;
    // 두 번째 원소부터 시작해서 하나씩 정렬된 위치에 삽입
    for(i = 1; i < n; i++) {
        key = arr[i]; // 현재 삽입할 값 저장
        // key보다 큰 값들을 한 칸씩 뒤로 이동
        for(j = i-1; j>=0 && arr[j]>key; j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key; // 빈 자리에 key 삽입
    }
}

int main() {
    int arr[] = {5,1,4,3,2,9,6,7,8};
    InsertionSort(arr,9);
    for(int i = 0; i < 9; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}