/*******************************************************************************************************/
// This program describes about the implementation of stack using Linked list.
// This program performs 3 basic operations done by a stack:
// 1) Push Element into the stack .
// 2) Pop Element out of the stack.
// 3) Print the complete stack.
//
// @Author: T Yashwanth Naidu
//
/*******************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack* next;
};
typedef struct stack stack_t;

int stack_count;
stack_t  *head=NULL;                                                    // Create Head Globally

void pushElement(){                                                     //Function to push elements into stack.

stack_t *new=NULL;                                                      // Init a temp stack
int element;

        new= (stack_t *)malloc(sizeof(stack_t));                        // Create a stack
        printf("Enter the element:  ");
        scanf("%d",&element);
        new->data=element;
        new->next=head;        
        printf("Pushed: %d\n",new->data);
        head=new;                                                       // Point back to head
        stack_count++;
    
}

void popElement(){                                                      // Pop elements out of stack
stack_t * temp=head;
    if(head==NULL)                                                      // If not elements present, print error msg.
    {
        printf("ERROR: No element to POP.\n");
    }
    else{                                                               // If present, Pop the latest element out.

        printf("%d Popped from Stack\n",head->data);
        head=head->next;
        free(temp);                                                     //  Free memory of the popped element.        
        stack_count--;
    }

}


void printStack(stack_t* head)                                          //  Print elements of the stack
{
    if(head==NULL)                                                     // If no elements are present, print err msg.
    {
        printf("ERROR: No STACK PRESENT to print.\n");
    }
    else{
        printf("\nNumber of elements in the stack are: %d\n",stack_count);
        while(head)
        {
            printf("%d---",head->data);
            head=head->next;
        }
    }
}

void main()
{
    while(1)
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Choose the operation\n");
        printf("1)Push Element\t2)Pop Element\n3)Print Stack\n");
        int choice;
        stack_t  *temp=NULL;

        scanf("%d",&choice);
        switch(choice){

            case 1: pushElement();                    
                    break;
            case 2: popElement();                    
                    break;
            case 3: printStack(head);
                    break;
            case 0:  exit(0);
            default: printf("  !!! Error: Invalid input\n");
                    break;

        }
    }
}
