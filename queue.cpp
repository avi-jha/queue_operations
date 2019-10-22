#include<stdio.h>
#include<stdlib.h>
#define max 50

// declared variable
int queue[max];
int rear,front;

// fuction for enqueue
void enqueue(int data){
	if(rear==max-1)
	printf("queue is full");
	else
	rear+=1;
	queue[rear]=data;
	if(front==-1)
	front=0;
}

// function for dequeue
void dequeue(){
	if(front==-1 || front==rear+1)
	printf("queue is empty");
	else
	{
	queue[front]=0;
	front=front+1;}
}

// funtion for display
void display(){
	printf("the lements in the queue are");
	int i;
	if(front==-1)
	printf("queue is empty");
	else
	
	for(i=front;i<+rear;i++)
	printf("%d\n",queue[i]);
}



int main(){
	int data,ch,i;
	printf("\n enter 1 for add \n enter 2 for delete \n enter 3 for display \n");
	
	// loop for number of times program can run
	while(1){
		
		printf("enter the choice\n");
		scanf("%d\n",&ch);
		
		{
			switch(ch)
			{
				
				case 1: printf("enter the data to be add\n");
				scanf("%d",&data);
				enqueue(data);
				break;
				case 2:dequeue();
				        break;
				case 3:display();
				        break;
			}
		}
	printf("the elemens are %d",queue[i]);
	}
}
