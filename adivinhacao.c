#include <stdio.h>
#include <locale.h>
#include <windows.h>


//imprime cabeçalho do jogo
int main() {
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    // váriavel
   int numerosecreto = 42;

   int chute;
    printf("Qual é o seu chute? ");
    // scanf é para escrever o chute
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute==numerosecreto);
    if (acertou){
         printf("Parabéns, você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }
    else {
        printf("Você errou!\n");
        printf("Mas não desanime, tente de novo!\n");

        int maior = chute > numerosecreto;
        if(maior) {
             printf("Seu chute foi maior que o número secreto\n");
        

        } else {
             printf("Seu chute foi menor que o número secreto\n");
        }
    }
}
   