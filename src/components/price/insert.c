int insert(float value){
    Fila *auxiliary;

    auxiliary = (Fila *)malloc(sizeof(struct no));
    auxiliary->data = value;

    if (size == 0){
        initial = auxiliary;
        final = auxiliary;
    }

    final->next = auxiliary;
    final = auxiliary;
    auxiliary->next = NULL;

    size++;
}