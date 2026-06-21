#include <stdio.h>

int main() {
    int start, end, num, temp, remainder, result;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        result = 0;

        while (temp != 0) {
            remainder = temp % 10;
            result += remainder * remainder * remainder;
            temp /= 10;
        }

        if (result == num)
            printf("%d ", num);
    }

    return 0;
}