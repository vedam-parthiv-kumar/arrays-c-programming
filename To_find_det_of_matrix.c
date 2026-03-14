#include <stdio.h>

int main() {
    int mat[10][10], n, i, j;
    long det = 0;

    printf("Enter matrix size (2 or 3): ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (n == 2) {
        det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    } 
    else if (n == 3) {
        det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
              mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
              mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    } else {
        printf("This simple version only supports 2x2 or 3x3.\n");
        return 1;
    }

    printf("Determinant: %ld\n", det);
    return 0;
}
