#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //FOR DYNAMIC ALLACATION
// CREATION OF NODE BY USING USER-DEFIEND DATATYPE STRUCTURE
typedef struct node
{
    int data;
    struct node *next;
} node;
// CRAETION OF LINKEDLIST BY USING STRUCTURE AND ALSO CREATE HEAD POINTER
typedef struct linkedlist
{
    struct node *head;
} linkedlist;
// THROUGH INITIALIZATION FUNCTION WE CAN INITIALIZE HEAD TO NULL BECAUSE WE CAN INSERT AT THE BEGINING
void initilize(linkedlist *l); // FUNCTION PROTOTYPE
void initilize(linkedlist *l)  // DEFINITION OF THE FUNCTION
{
    l->head = NULL;
}
/*FOLLOWING FUNCTION TAKES TWO ARGUMENTS
1-LINKEDLIST
2-DATA PART OF THE NODE
*/
void insertathead(linkedlist *l, int item); // FUNCTION PROTOTYPE
void insertathead(linkedlist *l, int item)// FUNCTION DEFINITION
{
    struct node *Newnode = (struct node *)malloc(sizeof(struct node));//DYNAMIC MEMORY ALLOCATION OF MEMORY FOR NEW NODE
    Newnode->data = item;//ITEM STORED IN THE DATAPART OF THE NODE
    Newnode->next = l->head;//HEAD POINTER OF THE LINKEDLIST POINT
    l->head = Newnode;
}
void print(linkedlist *l);//FUNCTION PROTOTYPE
void print(linkedlist *l)//FUNCTION DEFINITIOM
{
    struct node *temp;//CREATION A TEMPORARY NODE
    /*1-FIRSTLY THE TEMPORARY VARIABLE POINTS TO THE HEAD OF THE LINKED LIST THEN
    CHECHED WHERE THE NEXT PART OF THE NODE IS NULL;
*/
    for (temp = l->head; temp != NULL; temp = temp->next)
    {
        printf("%d->", temp->data);// DATA OF THE EACH NODE STORED IN THIS TEMPORARY VARIABLE
    }
}
int main()
{
    linkedlist l;//L IS A LINKEDLIST .
    initilize(&l);// CALLING THE INITILIZE FUNCTION BY REFERENCING THE LINKEDLIST L.
    insertathead(&l, 10);
    insertathead(&l, 20);
    insertathead(&l, 30);
    insertathead(&l, 40);
    print(&l);
    getch();
    return 0;
}