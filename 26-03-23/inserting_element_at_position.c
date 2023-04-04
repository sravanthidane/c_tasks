#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *head;
void create_list(int a[], int size)
{
    struct node *tail;
    int num;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = a[0];
    head->link = NULL;
    tail = head;
    for (int i = 1; i < size; i++)
    {
        struct node *current = (struct node *)malloc(sizeof(struct node));
        tail->link = current;
        current->data = a[i];
        current->link = NULL;
        tail = tail->link;
    }
}
void count_nodes(struct node *head)
{
    struct node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("count=%d\n", count);
}
struct node *delete_first_element(struct node *head)
{
    if (head == NULL)
    {
        printf("list is empty:\n");
    }
    else
    {
        struct node *tmp = head;
        head = head->link;
        free(tmp);
        tmp = NULL;
    }
    return head;
}
struct node *delete_last_element(struct node *head)
{
    struct node *tmp = head;
    struct node *tmp2 = head;
    while (tmp->link != NULL)
    {
        tmp2 = tmp;
        tmp = tmp->link;
    }
    tmp2->link = NULL;
    free(tmp);
    tmp = NULL;
    return head;
}
void display(struct node *head)
{
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("data=%d\n", ptr->data);
        ptr = ptr->link;
    }
}

void add_at_position(struct node *head, int value, int pos)
{
    struct node *ptr = head;
    // int i=1;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->link = NULL;

    // while (i < pos)
    // {
    //     ptr = ptr->link;
    //     i++;
    // }
    for (int i = 1; i < pos; i++)
    {
        ptr = ptr->link;
    }
    newnode->link = ptr->link;
    ptr->link = newnode;
    printf("successfully inserted\n");
}
struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;
    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

int main()
{
    int array[100] = {0}, num, var;
    printf("enter desired number of elements( max 100):\n");
    scanf("%d", &num);
    printf("enter array elements :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    create_list(array, num);
    count_nodes(head);
    add_at_position(head, 30, 3);
    count_nodes(head);
    display(head);
    head = delete_first_element(head);
    printf("elements after deleting first element:\n");
    display(head);
    printf("elements after deleting last element:\n");
    head = delete_last_element(head);
    display(head);
    head = reverse(head);
    printf("elements after reversing:\n");
    display(head);
    return 0;
}