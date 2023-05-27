#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
// new node on the front of the list.
void prependNode(struct Node** head_ref,
          int new_data)
{
    // 1. Allocate node
    struct Node* new_node =
           (struct Node*) malloc(sizeof(struct Node));
 
    // 2. Put in the data 
    new_node->data  = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. move the head to point to
    //    the new node
    (*head_ref)    = new_node;
}
void appendNode(struct Node** head_ref,
            int new_data)
{
    // 1. Allocate node
    struct Node* new_node =
           (struct Node*) malloc(sizeof(struct Node));
 
    // Used in step 5
    struct Node *last = *head_ref; 
 
    // 2. Put in the data 
    new_node->data  = new_data;
 
    // 3. This new node is going to be the
    //    last node, so make next of it as NULL
    new_node->next = NULL;
 
    // 4. If the Linked List is empty, then make
    //    the new node as head
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    // 5. Else traverse till the last node
    while (last->next != NULL)
        last = last->next;
 
    // 6. Change the next of last node
    last->next = new_node;
    return;
}
void insertAfterNode(struct Node* prev_node,
                 int new_data)
{
    // 1. Check if the given prev_node
    //    is NULL
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
 
    // 2. Allocate new node
    struct Node* new_node =
           (struct Node*) malloc(sizeof(struct Node));
 
    // 3. Put in the data 
    new_node->data  = new_data;
 
    // 4. Make next of new node as next
    //    of prev_node
    new_node->next = prev_node->next;
 
    // 5. Move the next of prev_node
    //    as new_node
    prev_node->next = new_node;
}
// This function prints contents of linked list starting from head
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}
int main()
{
	int option, key1, key ;
	struct Node* head = NULL;
	do
	{
		printf("Select option number.Enter 0 to exit");
		printf("1.prependNode()\n");
		printf("2.appendNode()\n");
		printf("3.insertNodeAfter()\n");
		printf("4.deleteNodeByKey()\n");
		printf("5.print\n");
		printf("6.updateNodeByKey\n");
		printf("\n");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("Enter the element: ");
				scanf("%d", key);
				prependNode(&head, key);
				break;
			case 2:
				printf("Enter the element: ");
				scanf("%d", &key);
				appendNode(&head, key);
				break;
			case 3:
				printf("Enter the element: ");
				scanf("%d", &key1);
				printf("Enter the element which: ");
				scanf("%d", &key);
				insertAfterNode(&key, key1);
				break;
			case 4:
				printf("\n Created Linked list is: ");
  				printList(head);
  				break;
  			
				
				
				
		}
	}while(option != 0);
}
