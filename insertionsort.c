#include <stdio.h>

void insertionSort(int *arr, int arrSize){
    int i, j, key;

    for(i = 1; i < arrSize; i++){
        key = arr[i];
        j = i - 1;
        
        // Dịch chuyển các phần tử lớn hơn key lên một vị trí
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Chèn key vào đúng vị trí
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);
    printf("\nOrdered array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}