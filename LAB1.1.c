//read and display all elements of an array
#include <stdio.h>

int main()
{
    int a[5], i;

    // Reading elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Displaying elements
    printf("The elements are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}