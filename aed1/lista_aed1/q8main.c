#include <stdio.h>
#include "q8.h"

int main(){
    int op, data, aux = 0;

    while(1){
        printf("operacoes: \n");
        printf("1- Adicionar elemento\n");
        printf("2- sair\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("valor: \n");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                aux = 1;
                break;
            default:
                printf("operacao invalida\n");
                break;
        }
        
        if(aux == 1)
            break;
    }

    operacao();

    return 0;
}
