#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
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
    current->link=NULL;

    head->link->link = current;

    return 0;
}