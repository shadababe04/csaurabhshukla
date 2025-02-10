#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
} node_t;

node_t *Head = NULL; // declared as a global variable

int main() 
{
    Head = (node_t *)malloc(sizeof(node_t)); // ✅ Now inside a function
    if (Head == NULL) {
        printf("Memory allocation failed\n");
        return -1; // Handle memory allocation failure
    }

    Head->data = 10;   // Example assignment
    Head->next = NULL; // Initialize the next pointer

    printf("Node created with data: %d\n", Head->data);

    free(Head); // Free allocated memory
    return 0;
}
