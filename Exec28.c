#include <stdio.h>

int main(){
    int numero, inverso = 0,digito, oringi;

    printf("Escreva um numero");
    scanf("d%",&numero);
    oringi = numero;

    while(numero > 0){
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero = numero / 10;
    }

    if(numero == inverso){
        printf("E um palindrome");
    }else{
        printf("Nao e palindrome");
    }



    return 0;
}
