#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;

void add_end_node(struct node *head, int num)
{
    struct node *tmp, *ptr;
    ptr = head;
    tmp = malloc(sizeof(struct node));
    tmp->data = num;
    tmp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = tmp;
}

struct node* node_at_begning(struct node *head,int num){
 struct node *tmp;
  
    tmp = malloc(sizeof(struct node));
    tmp->data = num;
    tmp->link = head;
    head=tmp;
    return head;
}
void print_nodes(struct node *head)
{

    if (head == NULL)

        printf("linked list is empty");

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("data=%d\n", ptr->data);
        ptr = ptr->link;
    }
}

void create(int array[],int size){
struct node *tmp;
    
    head = malloc(sizeof(struct node));
    head->data = array[0];
    head->link = NULL;
    tmp = head;

    for (int i = 1; i <size; i++)
    {
       
        struct node *current = malloc(sizeof(struct node));
        tmp->link = current;
        current->link = NULL;
        current->data = array[i];
        tmp = tmp->link;
    }
}

int main()
{
    int array[]={10,20,30,40,50,60};
    int size=6;
    create(array,size);
    add_end_node(head, 89);
   head= node_at_begning(head,99);
    print_nodes(head);

    return 0;
}