#include <stdio.h>

int main(void)
{
  int i,soma = 0;
  for (i = 0;i <= 500; i++) {
    if(i % 2 == 0){
      soma += i;
    }
  }
  printf("Resuntado da soma dos numeros pares: %d\n",soma);
  return 0;
}
