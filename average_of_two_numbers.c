#include <stdio.h>

int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%float", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);

    return 0;
}
