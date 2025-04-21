#include <stdio.h>

void transposed(int fil, int cols, int original[][cols], int transpuesta[][fil]) {
    for (int i = 0; i < fil; i++) {
        for (int j =0; j <cols; j++) {
            transpuesta[j][i] = original[i][j];
        }
    }
}

int main() {
    int fil,cols;
    
    printf("n de fil: ");
    scanf("%d",&fil);
    
    printf("n de cols: ");
    scanf("%d",&cols);
    
    if (fil <=0 || cols <= 0) {
        printf("tamaño invalido\n");
        return 1;
    }
    
    int original[fil][cols];
    int transpuesta[cols][fil];
    
    printf("Elementos de la matriz:\n");
    for (int i= 0; i < fil; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &original[i][j]);
        }
    }
    
    transposed(fil, cols, original, transpuesta);
    
    printf("\nMatriz Transpuesta:\n");
    for (int i = 0;i < cols; i++){
        for (int j = 0; j < fil; j++) {
            printf("%d\t", transpuesta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}