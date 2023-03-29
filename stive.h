#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INT_MIN 0;
typedef char Data;

struct Nod
{
    Data val;
    struct  Nod *next;
};
typedef struct Nod Node;
void push(Node**top, Data v);
int isEmpty(Node*top);
void deleteStack(Node**top);
Data top(Node *top);
Data pop(Node**top);
void paranteze(Node **top, Data v);
