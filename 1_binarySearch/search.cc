#include <iostream>

int binarySearch(int *arr, int length, int value);

int main(int argc, char const *argv[])
{
    int length = 5;
    int a[length] = {1, 2, 3, 4, 5};
    std::cout << binarySearch(a, length, 10);
    return 0;
}

int binarySearch(int *arr, int length, int value)
{
    int low = 0;
    int high = length;
    while (low < high)
    {
        int mid = ((high - low) / 2) + low;
        if (arr[mid] == value)
            return mid;
        if (arr[mid] > value)
            high = mid;
        if (arr[mid] < value)
            low = mid + 1;
    }
    return -1;
}