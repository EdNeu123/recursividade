#include <stdio.h>
#include <string.h>

void inverterString(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return; // Caso base: todos os caracteres foram invertidos
    }
    // Troca os caracteres
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    // Chamada recursiva
    inverterString(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];
    printf("Digite uma string para inverter: ");
    scanf("%s", str);
    inverterString(str, 0, strlen(str) - 1);
    printf("String invertida: %s\n", str);
    return 0;
}
