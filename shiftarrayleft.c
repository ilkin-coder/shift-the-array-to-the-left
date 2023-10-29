#include <stdio.h>
int main() {
    int n, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Your current array\n ");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    printf("Enter the value that you shift your array to the left: ");
    scanf("%d", &k);
    printf("\n");

    int newarr[n];
    for (int i = 0; i < n; i++) {
        newarr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int newIndex = (i - k + n) % n; 
        newarr[newIndex] = arr[i];
    }

    printf("Your new array\n ");
    for (int i = 0; i < n; i++) {
        printf(" %d ", newarr[i]);
    }
    return 0;
}