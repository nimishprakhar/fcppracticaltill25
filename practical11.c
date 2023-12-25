#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m], c[n][m];
    int i, j;

    printf("Enter matrix one:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter matrix two:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}