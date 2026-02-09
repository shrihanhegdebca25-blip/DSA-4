#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int date;
    struct Node *next;
};
int main()
{
    struct Node *head, *first, *second;
    head = (struct Node*)malloc(sizeof(struct Node));
     first = (struct Node*)malloc(sizeof(struct Node));
      second = (struct Node*)malloc(sizeof(struct Node));

      head->data=10;
      head->next = first;

      first->data=20;
      first->next= second;
      
      second->data=30;
      second->next=NULL;

      struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
      newNode->data=5;
      newNode->next=head;   
      head = newNode;


}