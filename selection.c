#include <stdio.h>

#define SIZE 5 
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int main() {
    int arr[SIZE]; 
    int i;
    printf("Enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]); 
    }
    selectionSort(arr, SIZE);
    printf("Sorted list:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\n", arr[i]); 
    }
    return 0; 
}