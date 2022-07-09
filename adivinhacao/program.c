#include <stdio.h>

int main() {

    //Imprime o cabeçalo do programa
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qual e o seu chute: ");
    scanf("%d", &chute);

    printf("Seu chute foi %d", chute);
}