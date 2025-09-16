#include <stdio.h>

int main(){
    int notaf,cont = 0;


    for(int i = 0;i < 50;i++){
        printf("Escreva a nota final: \n");
        scanf("%d", &notaf);

        if(notaf >= 6){
            cont++;
        }

    }
    printf("Total de aprovados: %d\n",cont);





    return 0;
}
