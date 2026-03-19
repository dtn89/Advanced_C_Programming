#include <stdio.h>

void selectionShort(int *arr, int arrSize){
    int temp;
    int min_idx;
    for(int i = 0; i < arrSize - 1; i++)
    {
        min_idx = i;
        for(int j = i + 1; j < arrSize; j++)
        {
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }

        if(min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main(){
    int array[5] = {5, 2, 9, 1, 3};
    int n = sizeof(array)/sizeof(array[0]);
    printf("Sap xep tu nho den lon\n");
    printf("Mang truoc khi sap xep:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    selectionShort(array, n);
    printf("\nMang sau khi sap xep:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
}