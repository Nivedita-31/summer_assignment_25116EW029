#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxFreq = 0, maxElement;

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Skip if element is already counted
        int visited = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                visited = 1;
                break;
            }
        }
        if (visited)
            continue;

        // Count frequency
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Element with Maximum Frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}