//Program to find sum of even and odd numbers
#include <stdio.h>

void findSumEvenOdd(int arr[], int n, int *sumEven, int *sumOdd) {
    *sumEven = 0;
    *sumOdd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            *sumEven += arr[i];
        } else {
            *sumOdd += arr[i];
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sumEven, sumOdd;
    findSumEvenOdd(arr, n, &sumEven, &sumOdd);

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    
    printf("Output: array = %d %d\n", sumEven, sumOdd);

    return 0;
}
