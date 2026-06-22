#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print characters
        for(j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}