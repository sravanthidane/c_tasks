#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL;

struct node* add_node_emptylist(struct node *head,int num){
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    struct node *tp;
    tmp->data=num;
    tmp->next=NULL;
    tmp->prev=NULL;
    tp=head;
    while(tp->next!=NULL){
        
    }
    return head;
}
struct node* add_at_end(struct node *head,int num)
{
struct node* tmp=malloc(sizeof(struct node));
tmp->prev=NULL;
tmp->data=num;
tmp->next=NULL;
tmp=head;


}

int main(){

    return 0;
}