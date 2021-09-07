int options()
{
    int opt;
    printf("\nEscolha uma opção\n");
    printf("\n--1. Adicionar um valor R$\n"
    "--2. Imprimir o troco\n"
    "--3. Sair\n");

    printf("\nOpção: ");
    scanf("%d", &opt);
    
    return opt;
}