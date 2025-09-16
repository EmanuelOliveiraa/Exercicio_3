#include <stdio.h>

int main(){
    int numero,original,digito,reverso = 0;

    printf("Digite o numero para fazer a inversao: ");
    scanf("%d",&numero);

    while(numero > 0){
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero = numero / 10;
    }

    printf("O numero inverso e: %d\n",reverso);



    return 0;
}
