#include <stdio.h>

int determinant(int matriz[3][3]) {
    
    int det = 
        matriz[0][0] * matriz[1][1] * matriz[2][2] + 
        matriz[0][1] * matriz[1][2] * matriz[2][0] + 
        matriz[0][2] * matriz[1][0] * matriz[2][1] - 
        matriz[0][2] * matriz[1][1] * matriz[2][0] - 
        matriz[0][0] * matriz[1][2] * matriz[2][1] - 
        matriz[0][1] * matriz[1][0] * matriz[2][2];
    
    return det;
}

int main() {
    int matriz[3][3];
    
    printf("Elementos de la matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int det = determinant(matriz);
    printf("Determinante de la matriz = %d\n", det);
    
    return 0;
}