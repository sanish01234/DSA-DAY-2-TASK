// insert
#include <stdio.h>
#include <conio.h>

#define MAXSIZE10

int Queue[MAXSIZE];
int front = 0;
int rear = -1;

void main()
{
    int choice();
    clrscr();
}

do
{
    printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    printf("Enter your choice.");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        delete ();
        break;
    case 3:
        display();
        break;
    }
}

insert()
{
    int n;
    if (rear == MAXSIZE - 1)
    {
        print("QUEUE Overflow\n ");

        // check if the queue is full (i=overflow condition)
    }
    else
    {
        printf("Enter an element");
        scanf("%d", &n);
        rear++;

        Queue[rear] = n;
    }
}