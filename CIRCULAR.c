#include<stdio.h>
#include<conio.h>
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
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.Quit\nEnter your choice:");
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
			case 5: break;
		}
	}
}
void insert()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(f==0 && r==max-1)
	printf("Queue Overflow");
	else if (f==-1 && r==-1)
	f=r=0;
	else
	r=(r+1)%max;
	q[r]=num;
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
		f=(f+1)%max;
	}
	printf("The deleted element is %d ",t);
}
void display()
{
	int i;
	if(f<=r)
	{
		for(i=f;i<=r;i++)
	       {	printf("%d\t",q[i]);}
	}
	else
	{
		for(i=0;i<=r;i++)
		{
			printf("%d\t",q[i]);
		}
		for(i=f;i<max;i++)
		{
			printf("%d\t",q[i]);
		}
	}
}
void peek()
{
	if(f==-1 && r==-1)
	printf("Queue Overflow");
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
Enter a number:45

1.ssssInsert
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
