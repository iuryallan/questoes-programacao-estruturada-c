// programa que receba um número positivo e calcule:
// o quadrado, o cubo, a raiz quadrada, a raiz cúbica e o resto da divisão por 3
// Iury Allan Alves Diógenes
#include <stdio.h>
#include <math.h>

float numero, quadrado, cubo, resto, quebrado, restof;
int main()
{
    //pede e recebe o número
    printf("digite um número:\n");
    scanf("%f", &numero);

    // verifica se o número é positivo ou não, realiza as operações e exibe as respostas pro usuário
    if (numero < 0) {
        printf("o número tem que ser postitivo");
    } else {
        quadrado = numero*numero;
        printf("%f ao quadrado = %f\n", numero, quadrado);

        cubo = numero*numero*numero;
        printf("%f ao cubo = %f\n", numero, cubo);
    
        printf("a raiz quadrada de %f = %f\n", numero, sqrt(numero));
        printf("a raiz cúbica de %f = %f\n", numero, cbrt(numero));

        int resto = (int)numero % 3;
        quebrado = numero - (int)numero;
        restof = resto + quebrado;
        printf("o resto da divisão entre %f e 3 = %f", numero, restof);
    }
    return 0;
}