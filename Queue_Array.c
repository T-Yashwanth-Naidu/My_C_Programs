/*******************************************************************************************************/
// This program describes about the implementation of Queue using Array.
// This program performs 3 basic operations done by a queue:
// 1) EnQueue Element into the Queue .
// 2) DeQueue Element out of the Queue.
// 3) Print the complete queue.
//
// @Author: T Yashwanth Naidu
//
/*******************************************************************************************************/
#include<stdio.h>
#define SIZE 5
int inputArray[SIZE];
int queueCount=-1;


void EnQueue()
{
    if(queueCount<SIZE)
    {   
        queueCount++;
        int element;
        printf("Enter the element to EnQueue: ");
        scanf("%d",&element);
        inputArray[queueCount]=element;
        
    }
    else{
        printf("\n!!!! ERROR: Queue is full !!!\n");
    }
}

void DeQueue()
{
    static int position;
    
    if((queueCount==-1) &&(position<SIZE))
    {
        printf("\n!!! ERROR: NO ELEMENTS TO DEQUEUE !!!\n");
    }
    else
    {
        printf("\n%d EXITED QUEUE\n",inputArray[position]);
        inputArray[position]=0;
        position++;
        queueCount--;        
    }
}

void printQueue()
{
    if(queueCount==-1) 
    {
        printf("\n!!! ERROR: NO ELEMENTS TO PRINT !!!\n");
    }
    else
    {
        for(int i=0;i<SIZE;i++)
        {
            printf("%d --- ",inputArray[i]);
        }
    }
}


void main()
{
    while(1)
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Choose the operation:\n1)EnQueue\t2)DeQueue\t3)Print Queue\n");
        int choice;
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: EnQueue();
                break;
        case 2: DeQueue();
                break;
        case 3: printQueue();
                break;        
        default:
                printf("\n!!! ERROR: INVALID OPTION !!!\n");            
                break;
        }
    }
}