#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stive.h"
typedef char Data;

struct Nod
{
    Data val;
    struct  Nod *next;
};
typedef struct Nod Node;
Data top(Node *top)
{
    if (isEmpty(top)) return INT_MIN;
    return top->val;
}

void push(Node**top, Data v)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->val=v;
    newNode->next=*top;
    *top=newNode;
}

Data pop(Node**top)
{
    if (isEmpty(*top)) return INT_MIN;
    Node *temp=(*top);
    Data aux=temp->val;
    *top=(*top)->next;
    free(temp);
    return aux;
}

int isEmpty(Node*top)
{
    return top==NULL;
}

void deleteStack(Node**top)
{
    Node  *temp;
    while {(!isEmpty(*top))
           temp=*top;
           *top=(*top)->next;
           free(temp);
          }
}
void paranteze(Node **top, Data v)
{
    Node **top1=NULL;
    int i,n;
    v=malloc(sizeof(Data) );
    printf("tastati nr de elemente din sir");
    scanf("%d",&n);
    printf("tastati sirul");
    scanf("%s",v);
    int ok=0,p=0;
    for(i=0; i<strlen(v); i++)
        push(&*top,v[i]);
    while(*top!=NULL)
    {
        if(*top->val=='{' || *top->val=='[' || *top->val=='(')
        {
            ok++;
            push(&*top1,p);
        }
        if(*top->val=='}' || *top->val==']' || *top->val==')')
        {
            ok--;
            pop(&*top1);
        }
        p++;
        *top=(*top)->next;
    }
    if(ok==0)
        printf("toate parantezele sunt inchise corect");
    else
        while(!isEmpty(top1))
        {
            printf("paranteza inchisa fara corespondent la pozitia %d\n",(*top1)->val);
            pop(&*top1);
        }

}


