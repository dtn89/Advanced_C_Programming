#include <stdio.h>


void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Ham phan hoach mang
int partition(int arr[], int low, int high){
    int pivot = arr[high];  // chon phan tu cuoi lam chot
    int i = low - 1;        // chi so cua phan tu nho hon pivot

    for(int j = low; j < high; j++){
        // Neu phan tu hien tai nho hon hoac bang pivot
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Dua pivot vao dung vi tri
    swap(&arr[i+1], &arr[high]);
    return i + 1;
}


// Ham Quick Sort de quy
void quickSort(int arr[], int low, int high){
    if(low < high){
        // Tim vi tri phan hoach
        int pi = partition(arr, low, high);

        // De quy sap xep cac phan tu ben trai va phai pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    int arr[] = {10, 7, 8, 9 , 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("\nMang sau khi sap xep: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}