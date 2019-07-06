#include  <stdio.h>
#include <stdlib.h>


 struct LinkedList {
       int data;
       struct LinkedList *next;
    };


typedef struct LinkedList *node;



int main(void)
{
   
    node temp;
    temp=(node)malloc(sizeof(struct LinkedList) );
    temp->next=NULL;
    temp->data=5;
    printf("%d\n",temp->data);
    free(temp);
    return 0;
}
