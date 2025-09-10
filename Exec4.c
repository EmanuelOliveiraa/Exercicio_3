#include <stdio.h>

int main(){
    int n1,n2;

    printf("Escreva um numero\n");
    scanf("%d",&n1);


    do{
        printf("Escreva um numero maior");
        scanf("%d",&n2);
    }while(n2 < n1);


    printf("O primeiro numero e menor que o segundo: %d %d\n",n1, n2);





    return 0;
}
