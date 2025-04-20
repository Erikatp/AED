#include <stdio.h>

void copy(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}

int main() {
    char str1[100];
    char str2[100];
    
    printf("Ingrese la cadena: ");

    int i = 0;
    char c;
    while ((c = getchar()) !='\n' && c !=EOF && i < 99) {
        str1[i++] = c;
    }
    str1[i] ='\0';

    printf("str1: %s\n", str1);
    copy(str1, str2);
    printf("str2: %s\n", str2);

    return 0;
}
