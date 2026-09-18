//write a program to reverse an array
#include <stdio.h>

int main() {
    int a[5], i, temp;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    // Reverse the array
    for(i = 0; i < 5/2; i++) {
        temp = a[i];
        a[i] = a[5-1-i];
        a[5-1-i] = temp;
    }
    printf("The reversed array is:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}