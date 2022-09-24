#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int count =0;
int top = -1;

void pushStack()
{
    
    if(top<MAX-1){
        int value;
        printf("Enter the element: ");
        scanf("%d",&value);
        ++top;
        stack[top]=value;
        printf("Pushed....\n");
    }
    else{
        printf("!!!!!!!! ERROR: Stack is overflown... !!!!!!!!\n");
    }
}

void popStack()
{
    if(top==-1)
        printf("Stack is empty, cannot pop\n");
    else{
        stack[top]=0;
        top--;
        printf("Popped...\n");
    }
}

void  printStack(){
    if(top==-1)
    printf("\n~~~~~~~~~~~No elements to print~~~~~~~~~~~\n");

    else{
        for (int i = top; i >=0  ; i--)    
        printf("%d ",stack[i]);
    }

}

void main()
{

do{
    printf("Select and option\n1)Push element\t2)Pop Element\t3)Print Stack\n");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
            pushStack();
            break;
    case 2:
            popStack();
            break;
    case 3:
            printStack();
            break;
    default:
        printf("Invalid Option\n");
        break;

    }

}while(1);
}