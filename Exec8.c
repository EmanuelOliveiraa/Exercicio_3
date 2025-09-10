#include <stdio.h>

int main(){
    float media,altura,soma = 0;
    char sexo;



    for(int i = 0;i < 5;i++){
        printf("Escreva o sexo: \n");
        scanf("%c", &sexo);

        printf("Escreva a altura: " );
        scanf("%f", &altura);

        if(sexo == 'f' || sexo == 'F'){
            soma += altura;
        }
    }
    media = soma/5;
    printf("Media da altura das mulheres: %.1f\n",media);





    return 0;
}
