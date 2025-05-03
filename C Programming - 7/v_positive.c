#include <stdio.h>
#include <stdlib.h>


void v_positive(int *v, int n, int **res, int *tam) {
    int i, j = 0;
    int cont = 0;
    
    for (i = 0; i < n; i++) {
        if (v[i] > 0) {
            cont++;
        }
    }
    
    *res = malloc(cont * sizeof(int));
    
    for (i = 0; i < n; i++) {
        if (v[i] > 0) {
            (*res)[j++] = v[i];
        }
    }
    
    *tam = cont;
}

int main() {
    int n, i;
    int *vec, *pos;
    int tam_pos;
    
    printf("n: ");
    scanf("%d", &n);
    
    
    vec = malloc(n * sizeof(int));
    printf("enteros:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
    
    v_positive(vec, n, &pos, &tam_pos);
    printf("Elementos positivos: ");
    for (i = 0; i < tam_pos; i++) {
        printf("%d ", pos[i]);
    }
  
    free(vec);
    free(pos);
    
    return 0;
}

