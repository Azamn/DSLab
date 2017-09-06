#include<stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1;

// return true if stack is full
int isFull(){
	
	return top==MAX_SIZE-1;
}

// return true if stack is empty
int isEmpty(){
	return top==-1;
	
}
// return elemnt at the top of the stack
int peek(){
	if(!isEmpty())
		return stack[top];
		else{
			printf("\n Stack is Empty. Returning -1");
			return -1;
		}
}

void push(int e){
	if(!isFull()){
		stack[++top]=e;
		printf("\n Element is Successfully Inserted");
	}else{
		printf("\n Stack overflow. Element cannot be inserted");
	}
}
int pop(){
	int d;
	if(!isEmpty()){
		d=stack[top--];
		return d;
	}else{
		printf("\n Stack is underflow. No element to delete. Returning -1");
		return -1;
	}
}
int main(){
	int choice,e;
		do{
			printf("\n Please Enter your Choice: ");
			printf("\n 1.Push \n 2.Pop \n 3.Peek \n 4.Exit\n");
			scanf("%d",&choice);
				switch(choice){
					case 1:
					printf("Please Enter the element  to be inserted :");
					scanf("%d",&e);
					push(e);
					break;
				case 2:
					e=pop();
					printf("\n Deleted Element is : %d",e);
					break;
				case 3:
					e=peek();
					printf("\n Element at the top of the stack is : %d",e);
					break;
				case 4:
					return 0;
					break;
				default:
					printf("\n Invalid choice:");
					
			}
		}while(1);
	return 0;
}

