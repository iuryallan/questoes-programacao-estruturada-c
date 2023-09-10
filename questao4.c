// lê um número inteiro positivo até que o usuário digite 0
// mostra o número digitado e seu fatorial
#include <stdio.h>

int main(){
    int numero;

    do {
        // pede e recebe um número inteiro positivo
        printf("digite um número inteiro positivo ou 0 para parar: ");
        scanf("%d", &numero);

        if (numero > 0) {
            unsigned long long fatorial = 1;
            
            // calcula o fatorial usando loop
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }

            printf("o nùmero digitado foi %d e seu fatorial é = %llu\n", numero, fatorial);
        } else if (numero < 0) {
            printf("digite apenas números inteiros positivos ou 0!\n");
        }

    } while (numero != 0);

    return 0;
}
