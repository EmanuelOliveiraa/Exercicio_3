#include <stdio.h>

int main(){
    //declaraçao de variaveis
    int numero,fatorial = 1;
    //entrada de variaveis
    printf("Digite o numero para achar o fatorial: ");
    scanf("%d",&numero);
    //processamento de dados
    for(int i = 1;i <= numero;i++){
        fatorial *= i;
    }

    printf("O fatorial do numero %d e: %d\n",numero,fatorial);



    return 0;
}
