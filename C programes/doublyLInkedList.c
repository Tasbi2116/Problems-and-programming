#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * pre;
    struct node * next;
}*head, *end;


void DlListcreation(int n);
void displayDlList();

int main()
{
    int n;
    head = NULL;
    end = NULL;
	printf("\n\n Doubly Linked List : Create and display a doubly linked list :\n");
	printf("-------------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    DlListcreation(n);
    displayDlList();
    return 0;
}

void DlListcreation(int n)
{
    int i, data;
    struct node *temp;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%d", &data);

            head->data = data;
            head->pre = NULL;
            head->next = NULL;
            end = head;
// putting data for rest of the nodes
            for(i=2; i<=n; i++)
            {
                temp = (struct node *)malloc(sizeof(struct node));
                if(temp != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &data);
                    temp->data = data;
                    temp->pre = end;    // new node is linking with the previous node
                    temp->next = NULL;

                    end->next = temp;   // previous node is linking with the new node
                    end = temp;            // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}
void displayDlList()
{
    struct node * temp;
    int n = 1;
    if(head == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        temp = head;
        printf("\n\n Data entered on the list are :\n");

        while(temp != NULL)
        {
            printf(" node %d : %d\n", n, temp->data);
            n++;
            temp = temp->next; // current pointer moves to the next node
        }
    }
}
