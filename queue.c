#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

// return true if queue is full
int isFull(){
	
	return rear==MAX_SIZE-1;
}

// return true if queue is empty
int isEmpty(){
	return front==-1 && rear==-1;
	
}

void display()
{
		int i;
		printf("The element in the queue are:");
		for(i=front;i<=rear;i++)
		{
		printf("\n%d",queue[i]);
		}
}
void insertQueue(int e){
	if(!isFull()){
		if(isEmpty()){
				front++;
			}
		rear++;
		queue[rear]=e;
		printf("element is successfully inserted");
		}
		else
		printf("THE queue is Full element cannot be inserted ");
}

void deleteQueue(){
		int d;
		if(!isEmpty()){
		d=queue[front];
		if(front==rear){
		front=rear=-1;
		}else{
		front++;
		printf("the element deleted is %d",d);
			}
		}
		else{
		printf("the queue is empty");
	}
}

int main(){
	int choice,e;
		do{
				printf("\n 1.Display \n 2.Insert \n 3.Delete \n 4.Exit\n");
				printf("\n Please Enter your Choice: ");
				scanf("%d",&choice);
				switch(choice){
					case 1:
						if(!isEmpty())
						display();
						else
						printf("\nThe queue is empty");
						break;
			case 2:
						printf("\nEnter the elment to be inserted: ");
						scanf("%d",&e);
						insertQueue(e); 
						break;
			case 3:
					deleteQueue();
					break;
			case 4:
					exit(0);
				break;
			default:
					printf("\nInvalid Choice");
					break;				
		}
	}while(1);
	return 0;
}
