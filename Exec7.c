#include <stdio.h>

int main(){
    float altura, menor_altura = 0,temp;
    int cont;



    do{
        printf("Escreva a altura \n");
        scanf("%f",&altura);
        menor_altura = altura;
        printf("Altura atual: %.2f\n\n", altura);
        if(altura == 0) break;
        if(altura <= menor_altura){
            menor_altura = altura;
            printf("Menor altura e : %.2f\n",menor_altura);
        }
        printf("Escreva a altura \n");
        printf("Para sair digite 0 \n");
        scanf("%f",&altura);

    }while(temp == 0);









    return 0;
}
