#include <stdio.h>

int main(){
    float idade, media,soma;
    int cont;

    do{
        printf("Escreva a idade \n");
        printf("Para sair digite -1 \n");
        scanf("%f",&idade);
        soma += idade;
        if(idade != 0){
            cont++;
        }

    }while(idade != -1);



    media = soma/2;
    printf("Media das idades e: %.1f\n",media);





    return 0;
}
