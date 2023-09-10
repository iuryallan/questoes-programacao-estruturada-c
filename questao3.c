// recebe 3 números inteiros positivos e os apresenta:
// em ordem crescente, em ordem decrescente ou com o menor número no meio
// Iury Allan Alves Diógenes
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // pede os três números
    printf("digite o primeiro número: ");
    scanf("%d", &num1);

    printf("digite o segundo número: ");
    scanf("%d", &num2);

    printf("digite o terceiro número: ");
    scanf("%d", &num3);

    if(num1 > 0 && num2 > 0 && num3 > 0){
        
        int opcao;

        // mostra as opções e recebe a resposta do usuário
        printf("\nescolha uma das opções:\n");
        printf("1 - mostre os números em ordem crescente\n");
        printf("2 - mostre os números em ordem decrescente\n");
        printf("3 - mostre o menor número entre os demais\n");
        printf("opção: ");
        scanf("%d", &opcao);

        // dependendo da escolha realiza as operações e mostra o resultado
        if (opcao == 1) {
            if (num1 <= num2 && num1 <= num3) {
                printf("%d - %d - %d\n", num1, (num2 <= num3) ? num2 : num3, (num2 <= num3) ? num3 : num2);
            } else if (num2 <= num1 && num2 <= num3) {
                printf("%d - %d - %d\n", num2, (num1 <= num3) ? num1 : num3, (num1 <= num3) ? num3 : num1);
            } else {
                printf("%d - %d - %d\n", num3, (num1 <= num2) ? num1 : num2, (num1 <= num2) ? num2 : num1);
            }
        } else if (opcao == 2) {
            if (num1 >= num2 && num1 >= num3) {
                printf("%d - %d - %d\n", num1, (num2 >= num3) ? num2 : num3, (num2 >= num3) ? num3 : num2);
            } else if (num2 >= num1 && num2 >= num3) {
                printf("%d - %d - %d\n", num2, (num1 >= num3) ? num1 : num3, (num1 >= num3) ? num3 : num1);
            } else {
                printf("%d - %d - %d\n", num3, (num1 >= num2) ? num1 : num2, (num1 >= num2) ? num2 : num1);
            }
        } else if (opcao == 3) {
            if (num1 <= num2 && num1 <= num3) {
                printf("%d - %d - %d\n", (num2 <= num3) ? num2 : num3, num1, (num2 <= num3) ? num3 : num2);
            } else if (num2 <= num1 && num2 <= num3) {
                printf("%d - %d - %d\n", (num1 <= num3) ? num1 : num3, num2, (num1 <= num3) ? num3 : num1);
            } else {
                printf("%d - %d - %d\n", (num1 <= num2) ? num1 : num2, num3, (num1 <= num2) ? num2 : num1);
            }
        } else {
            printf("opção inválida!\n");
        }

    } else {
        printf("todos os números precisam ser positivos");
    }
    return 0;
}