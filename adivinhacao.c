#include <locale.h>
#include <stdio.h>

// imprime cabeçalho do jogo
int main() {
  printf("******************************************\n");
  printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
  printf("******************************************\n");
  // váriavel
  int numerosecreto = 42;

  int chute;
  for (int i = 1; i <= 3; i++) {
    printf("Tentativa %d de 3\n", i);
    printf("Qual é o seu chute? ");

    if (scanf("%d", &chute) != 1) {
      printf("Seu chute foi %d\n", chute);
    }
    int acertou = (chute == numerosecreto);

    if (acertou) {
      printf("Parabéns! Você acertou!\n");
      printf("Jogue de novo, você é um bom jogador!\n");
      break;

    } else {
      int maior = chute > numerosecreto;
      if (maior) {
        printf("Seu chute foi maior que o número secreto\n");
      } else {
        printf("Seu chute foi menor que o número secreto\n");
      }
    }
  }
  printf("Fim de jogo\n");
}
