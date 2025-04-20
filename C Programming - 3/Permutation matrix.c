#include <stdio.h>

#define MAX 50

int permutationMatrix(int matriz[MAX][MAX] , int n) {
    
    for (int i = 0; i< n; i++){
        int contUnos = 0;
        for (int j = 0; j <n; j++){
            if (matriz[i][j]!= 0 && matriz[i][j] != 1) {
                return 0;
            }
            if(matriz[i][j]== 1) {
                contUnos++;
            }
        }
        if(contUnos != 1){
            return 0;
        }
    }
    for (int j = 0; j < n; j++) {
        int contUnos = 0;
        for (int i = 0; i < n; i++) {
            if(matriz[i][j] == 1) {
                contUnos++;
            }
        }
        if (contUnos != 1){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int matriz[MAX][MAX];
    printf("Tamaño de la matriz cuadrada: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > MAX) {
        printf("Tamaño inválido.\n");
        return 1;
    }
    
   printf("Elementos de la matriz:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
}
    
    if(permutationMatrix(matriz, n)) {
            printf("Si es una matriz de permutación");
    } else{
        printf("NO es una matriz de permutación");
    }
    
    return 0;
}