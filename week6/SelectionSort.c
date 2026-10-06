#include <stdio.h>

void SelectionSort(int arr[], int n) {
     // i 위치에 들어갈 최솟값을 찾음
    for(int i = 0; i < n-1; i++) {
        int min = i; // 현재 가장 작은 값의 위치
        // i 뒤쪽에서 최솟값 탐색
        for(int j = i+1; j < n; j++) {
            if(arr[min] > arr[j]) min = j; // 더 작은 값의 위치 저장
        }
        // 최솟값을 현재 위치 i와 교환
        if(i!=min) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main() {
    int arr[] = {5,1,4,3,2,9,6,7,8};
    SelectionSort(arr, 9);
    for(int i = 0; i < 9; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}