#include <stdio.h>

int main(){
    int numero, inverso = 0,digito=0, oringi=0;

    printf("Escreva um numero");
    scanf("%d",&numero);
    oringi = numero;

    while(numero > 0){
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero = numero / 10;
    }

    printf("Numero original: %d\n",oringi);
    printf("Numero inverso: %d\n",inverso);
    if(oringi == inverso){
        printf("E um palindrome %d\n",oringi);
    }else{
        printf("Nao e palindrome %d\n", oringi);
    }



    return 0;
}
