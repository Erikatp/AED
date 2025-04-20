#include <stdio.h>
void reverse(char str[]) {
    
    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }
    int ini = 0;
    int fin = tam - 1;
    while (ini < fin){
        char temp= str[ini];
        str[ini]= str[fin];
        str[fin] = temp;
        ini++;
        fin--;
    }
}
int main() {
    char str[100];
    
    printf("Ingrese la cadena: ");
    scanf("%99[^\n]", str);
    reverse(str);
    printf("Cadena invertida: %s\n", str);
    
    return 0;
}