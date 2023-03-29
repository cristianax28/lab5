#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INT_MIN 0;
typedef int Data;

struct Que
{
    Data val;
    struct  Nod *next;
};
typedef struct Que Queue;
void enQueue(Queue*q, Data v);
Data deQueue(Queue*q);
int isEmpty(Queue*q);
void deleteQueue(Queue*q);
Queue* createQueue();
