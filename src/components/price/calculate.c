#include "data.c"
#include "insert.c"

int calculate(float total){
    float *priceCurrent;
    int i, quantity;

    priceCurrent = malloc(quantity * sizeof(float));

    printf("\nDigite a quantidade de opções para troco ex:2 \n");
    printf("\n:");
    scanf("%d", &quantity);

    for (i = 0; i < quantity; i++) {
        printf("\nDigite o %d° valor R$: ", i + 1);
        scanf("%f", &priceCurrent[i]);
    }

    for (i = 0; i < quantity; i++) {
        while (priceCurrent[i] <= total) {
            insert(priceCurrent[i]);
            total = total - priceCurrent[i];
        }
    }
    
    free(priceCurrent);
    return 0;
}