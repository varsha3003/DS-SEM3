#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push();
void pop();
void disp();
void peek();
int main()
{	int ch=-1;
	do
	{
		printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:disp();
			break;
			case 5:break;
		}
	}while(ch!=5);
    return(0);
}
void push()
{
	struct node *n_n;
	int val;
	printf("Enter a number:");
	scanf("%d",&val);
	n_n=(struct node *)malloc(sizeof(struct node));
	n_n->data=val;
	if(top==NULL)
	{
		top=n_n;
		n_n->next=NULL;
	}
	else
	{
		n_n->next=top;
		top=n_n;
	}
}
void pop()
{
	struct node *ptr;
	ptr=top;
	if(top==NULL)
	printf("Stack Underflow");
	else
	{
		printf("The deleted element is %d",ptr->data);
		top=top->next;
		free(ptr);
	}
}
void peek()
{
	struct node *ptr;
	ptr=top;
	if(top==NULL)
	printf("Stack Underflow");
	else
	printf("The first element is %d",ptr->data);
}
void disp()
{
	struct node *ptr;
	ptr=top;
	if(top==NULL)
	printf("Stack is empty.");
	else
	{
		do
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}while(ptr!=NULL);
	}
}
Output:

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:12

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:45

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:78

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:89

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:90

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:56
Queue Overflow
1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:45
Queue Overflow
1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:2
The deleted element is 12
1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:3
45      78      89      45
1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:4
45
1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:67

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:5

Process returned 5 (0x5)   execution time : 63.882 s
Press any key to continue.
ss
