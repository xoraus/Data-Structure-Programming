#include <stdio.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}

void push(int n)
{
	if(top==size) // check overflow condition
		printf("The Stack is full!!\n");
	else
	{
		top++;
		stack[top] = value;
		printf("Insertion is duccessful\n");
	}
}

void pop()
{
	if(top==-1)
		printf("The Stack is Empty!!\n");
	else{
		printf("The element is deleted\n");
		top--;
	}
}

void display(){
	if(top == -1)
		printf("Stack is Empty!!\n");
	else{
		int i;
		printf("Stack elements are: \n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n", stack[i]);
		}
	}
}
