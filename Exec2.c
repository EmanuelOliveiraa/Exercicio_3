#include <stdio.h>

int main(void){
  //vai estourar o limite de int 
  int prod =0 , i;

  for(i = 1;i <= 100;i++){

    prod = prod * i;

  }


  printf("Soma dos numeros de 1 a 100: %d\n",prod);

  return 0;
}
