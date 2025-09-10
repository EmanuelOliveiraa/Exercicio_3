#include <stdio.h>

int main(){
    float idade, media,soma;




    for(int i = 1;i <= 20;i++){
        printf("Escreva a idade numero: %d\n", i);
        scanf("%f",&idade);
        soma += idade;
    }
    media = soma/20;
    printf("Media das idades e: %.1f\n",media);





    return 0;
}
