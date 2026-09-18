//iterative binary search
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int key, result;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, 0, 4, key);
    if(result == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}