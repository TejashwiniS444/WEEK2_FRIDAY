//C Program to find most frequent element in the array
#include <stdio.h>

int findMostFrequent(int arr[], int n) {
    int maxCount = 0; 
    int mostFrequentElement = arr[0]; 

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mostFrequentElement = arr[i];
        }
    }

    return mostFrequentElement;
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

    int result = findMostFrequent(arr, n);
    printf("The most frequent element is: %d\n", result);

    return 0;
}
