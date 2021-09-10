#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "components/price/calculate.c"
#include "components/menu/options.c"
#include "components/price/show.c"

void main(){
    int opt;
    float price = 0;
    do{
        opt = options();
        switch (opt){
        case 1:
            printf("\nDigite o valor R$: ");
            scanf("%f", &price);
            calculate(price);
            system("clear");
            break;
        case 2:
            if (price == 0){
                printf("\tadicione um valor!\n");
                break;
            }
            system("clear");
            show();
            break;
        case 3:
            exit(0);
        default:
            printf("Comando inválido\n");
        }
    } while (opt != 3);
}