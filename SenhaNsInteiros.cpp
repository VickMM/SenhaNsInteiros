#include<stdio.h>

main() {

  int password = 789;
  int test;
  int sum = 3;

  do {
    printf("\nDigite sua senha: \n");
    
    if (scanf("%i", &test) != 1 || password != test) {
        printf("\nSenha invalida! Por favor, digite senha correta!\n");
        printf("Use APENAS com numeros inteiros!\n");
        sum--; 
        while (getchar() != '\n'); 
    } 
        
  } while (sum>0 && test!=password);

  if(password != test) {
    printf("Sistema bloqueado");
  } else {
    printf("Sistema liberado");
  }
  
  return 0;
}
