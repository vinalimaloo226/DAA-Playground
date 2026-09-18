//sum of all elements in an array also find the average of the elements
#include <stdio.h>

int main() {
    int a[5], i, sum = 0;
    float average;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++) {
        sum += a[i]; // Calculate the sum of elements
    }
    average = sum / 5.0; // Calculate the average
    printf("The sum of the elements is: %d\n", sum);
    printf("The average of the elements is: %.2f\n", average);
    return 0;
}