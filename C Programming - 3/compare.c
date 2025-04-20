#include <stdio.h>

int compare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1; //str1 es el más corto
    } else {
        return 1; //str1 es mas largo
    }
}

int main() {
    char str1[100];
    char str2[100];
    
    printf("Cadena 1:");
    scanf("%99[^\n]", str1);
    while (getchar() != '\n');
    
    printf("Cadena 2:");
    scanf("%99[^\n]",str2);
    
    int resultado =compare(str1, str2);
    printf("%d\n", resultado);
    
    return 0;
}