int size = 0;

struct no
{
    int data;
    struct no *next;
};
typedef struct no Fila;

struct no *initial = NULL;
struct no *final = NULL;