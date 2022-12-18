// Queue implementation 
#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
  deQueue();
  enQueue(11);
  enQueue(21);
  enQueue(31);
  enQueue(41);
  enQueue(51);
  enQueue(61);
  display();
  deQueue();
  deQueue();
  display();

  return 0;
}

void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nAdded element: %d", value);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is empty\n");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

void display() {
  if (rear == -1)
    printf("\nQueue is empty");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}