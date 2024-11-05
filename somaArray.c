#include <stdio.h>
#include <stdlib.h>

int somaArray(int arr[], int n) {
    if (n <= 0) {
        return 0; // Caso base: soma de um array vazio é 0
    } else {
        return arr[n - 1] + somaArray(arr, n - 1); // Chamada recursiva
    }
}

int main() {
    system("CHCP 65001>NULL"); // Configura o console para UTF-8

    int num;
    while (1) {
        printf("Digite o número de elementos no array: ");
        if (scanf("%d", &num) == 1) { // Verifica se a entrada é um número
            break; // Sai do loop se for um número
        } else {
            printf("Você digitou algo diferente de um número! Digite apenas números!\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }

    int arr[num];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < num; i++) {
        while (1) {
            printf("Elemento %d: ", i + 1);
            if (scanf("%d", &arr[i]) == 1) { // Verifica se a entrada é um número
                break; // Sai do loop se for um número
            } else {
                printf("Você digitou algo diferente de um número! Digite apenas números!\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
            }
        }
    }

    printf("Soma dos elementos do array é %d\n", somaArray(arr, num));
    return 0;
}
