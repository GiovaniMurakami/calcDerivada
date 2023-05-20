#include <math.h>
#include <stdio.h>

int escolha = 0;
float x = 0;
float k = 0;

float derivadaXaK(float x, float k) { return pow(x, k - 1) * k; }

int main() {
  do {
    printf("\n");
    printf(
        "==================================================================\n");
    printf("Seja bem-vindo(a) a calculadora de Derivadas!\n");
    printf("Selecione as opções de 1 a 4\n");
    printf(
        "==================================================================\n");
    printf("1.Derivada de f(x) = x^k\n");
    printf("2.Derivada de f(x) = ln(x)\n");
    printf("3.Derivada de f(x) = sin(x)\n");
    printf("4.Sair\n");
    while (scanf("%d", &escolha) != 1) {
      printf("Entrada inválida. Por favor, digite um valor numérico: \n");
      while (getchar() != '\n')
        ;
    }
    switch (escolha) {
    case 1:
      powX();
      break;
    case 2:
      lnX();
      break;
    case 3:
      sinX();
      break;
    case 4:
      sair();
      break;
    default:
      printf("Valor inválido, digite um número inteiro entre 1 e 4\n");
    }
  } while (escolha != 4);
  return 0;
}

// Calcular derivada de f(x) = x^k
int powX() {
  printf("Foi escolhido: Calcular derivada da função f(x) = x^k\n");
  printf("Informe o valor de X(BASE):\n");
  while (scanf("%f", &x) != 1) {
    printf("Entrada inválida. Por favor, digite um valor numérico para X:\n");
    while (getchar() != '\n')
      ;
  }

  printf("Informe o valor de K(EXPOENTE):\n");
  while (scanf("%f", &k) != 1 || x == 0 && k <= 0) {
    if (x == 0 && k <= 0){
     printf("Escolha um número maior que 0 para K, quando X = 0 e k<=0, o resultado será indefinido\n"); 
    } else { 
    printf("Entrada inválida. Por favor, digite um valor numérico para K:\n");
    }
    while (getchar() != '\n')
      ;
  }

  printf("f'(%.2f) = %.4f \n", x, derivadaXaK(x, k));
}

// Calcular derivada f(x) = ln(x)
int lnX() {
  printf("Foi escolhido: Calcular derivada da função f(x) = ln(x)\n");
  printf("Informe o valor de x:\n");
  while (scanf("%f", &x) != 1 || x <= 0) {
    printf("Entrada inválida. Por favor, digite um valor numérico maior que 0 para X:\n");
    while (getchar() != '\n')
      ;
  }
  printf("f'(%.2f) = %.4f", x, 1 / x);
}

// Calcular derivada de f(x) = sin(x)
int sinX() {
  printf("Foi escolhido: Calcular derivada da função f(x) = sin(x)\n");
  printf("Informe o valor de x(Rad):\n");
  while (scanf("%f", &x) != 1) {
    printf("Entrada inválida. Por favor, digite um valor numérico para X:\n");
    while (getchar() != '\n')
      ;
  }
  printf("f'(%.2f) = %.4f", x, cos(x));
}

int sair() {
  printf("\n");
  printf("Saindo do programa...\n");
  exit(0);
}