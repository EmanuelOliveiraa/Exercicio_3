#include <stdio.h>

int main(){

    int n1;
    int div = 1;

    printf("Escreva um numero");
    scanf("%d",&n1);

    //if(n1 % 1 == n1){
        //div++;
        for(int i = 2;i <= n1;i++){

            if(n1 % i == 0){
                div++;
            }

        }
   // }

    if(div == 2){
        printf("E um numero primo");
    }else{
        printf("Nao e um numero primo");
    }

    return 0;
}
