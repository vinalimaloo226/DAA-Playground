//find the largest element in an array
#include <stdio.h>

int main() {
    int a[5], i, largest;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    largest = a[0]; // Assume the first element is the largest
    for(i = 1; i < 5; i++) {
        if(a[i] > largest) {
            largest = a[i]; // Update largest if current element is greater
        }
    }
    printf("The largest element is: %d\n", largest);
    return 0;
}