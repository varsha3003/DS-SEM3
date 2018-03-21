#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *f=NULL,*r=NULL;
void enqueue();
void dequeue();
void peek();
void disp();
int main()
{
	int ch=-1;
	do
	{
		printf("\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n5.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:peek();
			break;
			case 4:disp();
			break;
			default:printf("Invalid Input");
            }
	}while(ch!=5);
	return 0;
}
void enqueue()
{
	struct node *n_n;
	int val;
	n_n=(struct node *)malloc(sizeof(struct node));
	printf("Enter a number:");
	scanf("%d",&val);
	n_n->data=val;
	if(f==NULL && r==NULL)
	{
		n_n->next=NULL;
		f=r=n_n;
	}
	else
	{
		n_n->next=NULL;
		r->next=n_n;
		r=n_n;
	}
}
void dequeue()
{
	struct node *ptr;
	ptr=f;
	if(f==NULL)
	printf("Stack Underflow");
	else if(ptr->next==NULL)
	{
		printf("The deleted element is %d",ptr->data);
		free(ptr);
		f=r=NULL;
	}
	else
	{
		printf("The deleted element is %d",ptr->data);
		f=ptr->next;
		free(ptr);
	}
}
void peek()
{
	struct node *ptr;
	ptr=f;
	if(f==NULL)
	printf("Stack UNderflow");
	else
	printf("The first element is %d",ptr->data);
}
void disp()
{
	struct node *ptr;
	ptr=f;
	if(f==NULL)
	printf("Stack Underflow");
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
}
Output:

1.ENQUEUE
2.DEQUEUE
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:1
Enter a number:23

1.ENQUEUE
2.DEQUEUE
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:1
Enter a number:90

1.ENQUEUE
2.DEQUEUE
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:1
Enter a number:67

1.ENQUEUE
2.DEQUEUE
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:2
The deleted element is 23
1.ENQUEUE
2.DEQUEUE
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:3
The first element is 90
1.ENQUEUE
2.DEQUEUE
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:4
90      67
1.ENQUEUE
2.DEQUEUE
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:5
Invalid Input
Process returned 0 (0x0)   execution time : 29.339 s
Press any key to continue.
