#include <stdio.h>

void quickSort(int *arr, int low, int high);
void swap(int *arr, int i, int j);
int partition(int *arr, int low, int high);
void printArray(int *arr, int length);

int main(int argc, char const *argv[])
{
    int a[5] = {1,3,5,4,7};
    quickSort(a, 0, 5);
    printArray(a, 5);
    return 0;
}

void swap(int *arr, int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void quickSort(int *arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(int *arr, int low, int high) {
    int i = low - 1;
    int pi = arr[high];

    for (int j = low; j < high; j++) {
        if(arr[j] < pi) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return i + 1;
}

void printArray(int *arr, int length) {
    printf("\n");
    for (int i = 0; i< length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}