#include <stdio.h>

void product(int fil1, int col1, int fil2, int col2, 
                         int matriz1[][col1], int matriz2[][col2], 
                         int resul[][col2]) {
    
    for(int i = 0; i < fil1; i++) {
        for(int j = 0; j < col2; j++) {
            resul[i][j] = 0;
        }
    }
    
    for(int i = 0; i < fil1; i++) {
        for(int j = 0; j < col2; j++) {
            for(int k = 0; k < col1; k++) {
                resul[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int fil1, col1, fil2, col2;
    printf("1° matriz (filas columnas): ");
    scanf("%d %d", &fil1, &col1);
    
    printf("2° matriz (filas columnas): ");
    scanf("%d %d", &fil2, &col2);
    
    if (col1 != fil2) {
        printf("No se puede multiplicar estas matrices");
        return 1;
    }
    
    int matriz1[fil1][col1];
    int matriz2[fil2][col2];
    int resul[fil1][col2];
    
    printf("elementos 1° matriz:\n");
    for(int i = 0; i < fil1; i++) {
        for(int j = 0; j < col1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("elementos 2° matriz :\n");
    for(int i = 0; i < fil2; i++) {
        for(int j = 0; j < col2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    product(fil1, col1, fil2, col2, matriz1, matriz2, resul);
    printf("Matriz producto:\n");
    for(int i = 0; i < fil1; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d\t", resul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}