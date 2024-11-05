#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1; // Caso base: fatorial de 0 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

int main() {
	system ("CHCP 65001>NULL");
    int num;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);
    printf("Fatorial de %d é %d\n", num, fatorial(num));
    return 0;
}
