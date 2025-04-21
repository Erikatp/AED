#include <stdio.h>

int symmetric(int n, int matriz[][n]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++){
            if (matriz[i][j] != matriz[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    
    printf("Tamaño de la matriz: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Tamaño invalido.\n");
        return 1;
    }
    
    int matriz[n][n];
    printf("Elementos de la matriz:\n");
    for(int i =0; i< n; i++) {
        for(int j = 0; j< n; j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
    
    if(symmetric(n, matriz)) {
        printf("La matriz eS simetrica");
    } else {
        printf("La matriz no es simetrica");
    }
    
    return 0;
}