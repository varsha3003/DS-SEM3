#include<stdio.h>

#define max 5
int q[max],f=-1,r=-1;
void insert();
void del();
void display();
void peek();
void main()
{
	int ch=1;

	while(ch!=5)
	{
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.Quit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			break;
			case 2: del();
			break;
			case 3: display();
			break;
			case 4: peek();
			break;
			default:printf("Invalid Input");
		}
	}
}
void insert()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if( r==max-1)
	printf("Queue Overflow");
	 if (f==-1 && r==-1)
	{
		f=r=0;
		q[r]=num;
	}
	else
	{	r++;
	q[r]=num;
	}
}
void del()
{
	int t;
	if(f==-1 && r==-1)
	printf("Queue Underflow");
	else if(f==r)
	{
		t=q[f];
		f=r=-1;
	}
	else
	{
		t=q[f];
		f++;
	}
	printf("The deleted element is %d ",t);
}
void display()
{
	int i;
	if(f==-1&&r==-1)
	{
		printf("\nqueue is empty");
	}
	for(i=f;i<=r;i++)
	{
		printf("\n%d",q[i]);
	}

}
void peek()
{
	if(f==-1 && r==-1)
	printf("Queue Underflow");
	else
	printf("%d",q[f]);
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
Enter a number:34

1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:1
Enter a number:56

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

34
56
1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:4
34
1.Insert
2.Delete
3.Display
4.Peek
5.Quit
Enter your choice:5

Process returned 5 (0x5)   execution time : 20.485 s
Press any key to continue.
