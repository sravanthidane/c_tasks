#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head =malloc(sizeof(struct node));
    head->data = 20;
    head->link = NULL;
    printf("%d", head->data);
}