#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

int main()
{
   
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    struct node *third;
    third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth;
    fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth;
    fifth = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = NULL;
   
    getch();
    return 0;
}