// recebe a idade, o peso e altura de 10 pessoas e mostra:
// mostra a média de pesos
// a quantidade de pessoas com mais de 80kg e menos de 1,50m
// a porcentagem de pessoas com mais de 1,90m com idade entre 10 e 30 anos
#include <stdio.h>

int main(){
    int idade, i;
    int ipesoaltura = 0;
    int idadetotal = 0;
    int iidade10a30 = 0;
    float peso, altura, media, porcentagem;
    
    // recebe as informações das 10 pessoas
    printf("você irá digitar a idade, o peso (em kg) e a altura (em metros) de 10 pessoas\n");
    for (i = 1; i <= 10; i++){
        printf("digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);
        printf("digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        
        // guarda a soma de todas as idades
        idadetotal += idade;
        
        // conta a quantidade de pessoas que cabem na condição
        if (peso > 80 && altura < 1.50){
            ipesoaltura++;
        }
        if (idade >= 10 && idade <= 30 && altura > 1.90){
            iidade10a30++;
        }
    }
    media = (float)idadetotal / 10;
    porcentagem = (float)iidade10a30 / 10 * 100;

    printf("1) média das idades: %.2f\n", media);
    printf("2) quantidade de pessoas que pesam menos de 80kg e medem menos de 1,50m: %d\n", ipesoaltura);
    printf("3) porcentagem de pessoas entre 10 e 30 anos que medem mais de 1,90m: %.2f%%\n", porcentagem);

    return 0;
}