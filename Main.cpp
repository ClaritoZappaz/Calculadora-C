//Clarito Zappaz
// Importa a Biblioteca math.h
#include <math.h>
// Importa a Biblioteca stdio.h
#include <stdio.h>

// Essa função lê um número digitado
float lerNumero(void) {
  // Declara um número de ponto flutuate
  float numero;
  // Pede para o usuário digitar um número
  printf("digite um numero:\n");
  // Lê um numero digitado
  scanf("%f", &numero);
  // Retorna o número digitado
  return numero;
}

int main(void) {
  // Exibe informações no console
  printf("Clarito Zappaz\n");
  printf("Tecnologia em Redes de Computadores\n");
  printf("Unilasalle\n");
  printf("200120417\n");
  printf("\n");

  // Exibe Menu
  printf("---------------MENU--------------\n");
  printf("1. Adição\n");
  printf("2. Subração\n");
  printf("3. Divisão\n");
  printf("4. Multiplicação\n");
  printf("5. Raiz Quadrada\n");
  printf("6. Potência\n");

  // Declaração de variáveis
  int opicao;
  float numero1, numero2;

  // Chama função que lê o número digitado
  // Converte de ponto flutuante para inteiro
  opicao = (int)lerNumero();

  // Avalia a variável "opicao)"
  switch (opicao) {
    // Caso a opção for igual a 1
  case 1:
    // Notifica a opção escolhida
    printf("\nA opção escolhida foi Adição\n");
    // Lê os números para executar as operações
    numero1 = lerNumero();
    numero2 = lerNumero();
    // Executa e mostra a operação na tela
    printf("O resultado da soma é: %.2f\n", numero1 + numero2);
    // A instrução break termina a execução do switch e o programa continua a
    // executar na instrução seguinte.
    break;
    // Caso a opção for igual a 2
  case 2:
    // Notifica a opção escolhida
    printf("\nA opção escolhida foi Subtração\n");
    // Lê os números para executar as operações
    numero1 = lerNumero();
    numero2 = lerNumero();
    // Executa e mostra a operação na tela
    printf("O resultado da subtração é: %.2f\n",
           (numero1 > numero2) ? (numero1 - numero2) : (numero2 - numero1));
    // A instrução break termina a execução do switch e o programa continua a
    // executar na instrução seguinte.
    break;
    // Caso a opção for igual a 3
  case 3:
    // Notifica a opção escolhida
    printf("\nA opção escolhida foi Divisão\n");
    // Lê os números para executar as operações
    numero1 = lerNumero();
    numero2 = lerNumero();
    // Executa e mostra a operação na tela
    printf("O resultado da Divisão é: %.2f\n", numero1 / numero2);
    // A instrução break termina a execução do switch e o programa continua a
    // executar na instrução seguinte.
    break;
    // Caso a opção for igual a 4
  case 4:
    // Notifica a opção escolhida
    printf("\nA opção escolhida foi Multiplicação\n");
    // Lê os números para executar as operações
    numero1 = lerNumero();
    numero2 = lerNumero();
    // Executa e mostra a operação na tela
    printf("O resultado da Multiplicação é: %.2f\n", numero1 * numero2);
    // A instrução break termina a execução do switch e o programa continua a
    // executar na instrução seguinte.
    break;
    // Caso a opção for igual a 5
  case 5:
    // Notifica a opção escolhida
    printf("\nA opção escolhida foi Raiz Quadrada\n");
    // Lê os números para executar as operações
    numero1 = lerNumero();
      //Para fazer a raiz quadrada usamos a função sqrt da biblioteca math.h
    printf("O resultado da Raiz Quadrada de %.0f é %.4f\n", numero1,
           sqrt(numero1));
    // A instrução break termina a execução do switch e o programa continua a
    // executar na instrução seguinte.
    break;
    // Caso a opção for igual a 6
  case 6:
    // Notifica a opção escolhida
    printf("\nA opção escolhida foi Potência\n");
    // Lê os números para executar as operações
    numero1 = lerNumero();
    numero2 = lerNumero();
    // Para fazer  potenciação usamos a função pow da bliblioteca math.h
    printf("%.0f elevado a %.0f é %.2f\n", numero1, numero2,
           pow(numero1, numero2));
    // A instrução break termina a execução do switch e o programa continua a
    // executar na instrução seguinte.
    break;
    //Caso nenhuma das opções forem válidas entra neste case
  default:
    printf("Por favor digite uma opção válida\n");
    // executar na instrução seguinte.
    break;
  }
  //Encerra
  return 0;
}
