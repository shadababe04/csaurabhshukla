#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node_t;

//node_t *HEAD = NULL;

void printNode(node_t *head)
{
    int count = 0;
    while(head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
        count++;
    }
    printf("NULL\n");
    printf("Todtal number of Nodes are = %d",count);
}

int main()
{
    node_t *HEAD = (node_t *)malloc(sizeof(node_t));
    node_t *SECND = (node_t *)malloc(sizeof(node_t));
    node_t *THIRD = (node_t *)malloc(sizeof(node_t));
     // Check if memory allocation was successful
    if (HEAD == NULL || SECND == NULL || THIRD == NULL) 
    {
        printf("Memory allocation failed\n");
        return -1;
    }
    HEAD->data = 10;
    HEAD->next = SECND;

    SECND->data = 20;
    SECND->next = THIRD;

    THIRD->data = 30;
    THIRD->next = NULL;

    printNode(HEAD);

       // Free allocated memory
       free(HEAD);
       free(SECND);
       free(THIRD);
   
    return 0;
}
