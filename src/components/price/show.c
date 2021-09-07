void show()
{
    struct no *auxiliary;

    if (initial == NULL)
    {
        printf("\tERRO: Fila vazia");
        return;
    }

    auxiliary = initial;

    while (auxiliary != NULL)
    {
        printf("\nR$:");
        printf("%d", auxiliary->data);
        auxiliary = auxiliary->next;
    }
}