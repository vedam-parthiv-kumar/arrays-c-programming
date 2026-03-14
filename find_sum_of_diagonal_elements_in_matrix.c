#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, i, j, sum_main_diag = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; ++i) {
        sum_main_diag += matrix[i][i];
    }

    printf("Sum of the main diagonal: %d\n", sum_main_diag);

    return 0;
}
