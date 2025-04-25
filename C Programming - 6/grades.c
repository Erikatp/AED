#include <stdio.h>
#include <stdlib.h>

struct salon {
   int n;
   int *notas;
};

int get_high_score(struct salon *s) {
   if (s->n <= 0) {
       return -1;
   }
   int max = s->notas[0];
   for (int i = 1; i < s->n; i++) {
       if (s->notas[i] > max) {
           max = s->notas[i];
       }
   }
   return max;
}

int main() {
   struct salon clase;
   
   printf("n de estudiantes: ");
   scanf("%d", &clase.n);
   
   clase.notas = (int *)malloc(clase.n * sizeof(int));
   if (clase.notas == NULL) {
       printf("Error\n");
       return 1;
   }
   
   printf("Ingrese notas de los estudiantes:\n");
   for (int i = 0; i < clase.n; i++) {
       printf("Estudiante %d: ", i + 1);
       scanf("%d", &clase.notas[i]);
   }
   
   int highest = get_high_score(&clase);
   printf(" La nota mas alta es: %d\n", highest);
   
   free(clase.notas);
   
   return 0;
}