#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void count_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("linked list is empty");
    }
    struct node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("count=%d", count);
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    head->data = 40;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 60;
    //current->link = NULL;

    head->link->link = current;

    count_nodes(head);

    return 0;
}