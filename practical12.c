#include <stdio.h>

void main() {
    int n, m, p, q;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &n, &m);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (m != p) {
        printf("Matrix multiplication cannot be applied. Please enter matrices with compatible dimensions.\n");
    }

    int a[n][m], b[p][q], c[n][q];
    int i, j, k;

    printf("Enter matrix one:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix two:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}