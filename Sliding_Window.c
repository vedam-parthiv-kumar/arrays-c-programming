#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 1) return 1;

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the window size (k): ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid window size.\n");
        free(arr);
        return 1;
    }

    int current_sum = 0;
    int max_sum = 0;

    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum sum: %d\n", max_sum);

    free(arr);
    return 0;
}
