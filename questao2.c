// recebe um horário formado por hora.minutos e apresenta a quantidade de minutos e segundos equivalentes
// Iury Allan Alves Diógenes
#include <stdio.h>

float horas;
int minutos, segundos, minutosq;
int main(){
    
    // pede e recebe a hora
    printf("digite um horário (formato: hh.mm):\n");
    scanf("%f", &horas);
    minutosq = (horas - (int)horas) * 100;

    // verificação do formato, realização das operações e retorno pro usuário
    if (horas >= 0 && horas < 24 && minutosq >= 0 && minutosq < 60){
        minutos = ((int)horas * 60) + minutosq;
        segundos = minutos * 60;
        printf("o horário %f equivale a %d em minutos e %d em segundos", horas, minutos, segundos);
    } else {
        printf("horário informado inválido!\n");
        printf("atente-se que as horas só vão até 23 e os minutos até 59\n");
    }
    return 0;
    
}