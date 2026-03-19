#include <stdio.h>

void bubbleShort(int *arr, int arrSize){
    int temp;
    for(int i = 0; i < arrSize - 1; i++)
    {
        for(int j = 0; j < arrSize - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int array[5] = {5, 2, 9, 1, 3};
    printf("Sap xep tu nho den lon\n");
    printf("Mang truoc khi sap xep:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d  ", array[i]);
    }
    bubbleShort(array, sizeof(array)/sizeof(array[0]));
    printf("\nMang sau khi sap xep:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d  ", array[i]);
    }
    return 0;
}