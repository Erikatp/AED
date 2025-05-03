#include <stdio.h>
#include <stdlib.h>

double ***matrix3d(int m, int n, int k) {
    int i, j;
    double ***matrix;
    
    matrix = malloc(m * sizeof(double **));
    for (i = 0; i < m; i++) {
        matrix[i] = malloc(n * sizeof(double *));
        for (j = 0; j < n; j++) {
            matrix[i][j] = malloc(k * sizeof(double));
        }
    }
    
    return matrix;
}

void free_matrix(double ***matrix, int m, int n) {
    int i, j;
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int m, n, k;
    int i, j, l;
    double ***matrix;
    
    printf("Dimensiones (m n k): ");
    scanf("%d %d %d", &m, &n, &k);
    
    matrix = matrix3d(m, n, k);
    
    printf("Elementos de la matriz\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            for (l = 0; l < k; l++) {
                printf("[%d][%d][%d]: ", i, j, l);
                scanf("%lf", &matrix[i][j][l]);
            }
        }
    }
    
    
    printf("\nMatriz por capas\n");
    for (l = 0; l < k; l++) {
        printf("Capa %d:\n", l + 1);
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%.2f\t", matrix[i][j][l]);
            }
            printf("\n");
        }
    }
    
    free_matrix(matrix, m, n);
    
    return 0;
}