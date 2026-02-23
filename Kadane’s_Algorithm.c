#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0];
    int current_max = arr[0];

    for (i = 1; i < n; i++) {
        current_max = (arr[i] > (current_max + arr[i])) ? arr[i] : (current_max + arr[i]);
        max_so_far = (current_max > max_so_far) ? current_max : max_so_far;
    }

    printf("\nMaximum contiguous sum is: %d\n", max_so_far);

    free(arr);
    return 0;
}
