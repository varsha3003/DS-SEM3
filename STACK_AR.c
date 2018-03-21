#include<stdio.h>
#include<conio.h>
# define max 5
void push();
void pop();
void peek();
void disp();
int a[max],top=-1;
void main()
{
	int ch=-1;
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
	getch();
}
void push()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(top==max-1)
	printf("Stack Overflow");
	else
	{
		top++;
		a[top]=n;
	}
}
void pop()
{
	if(top==-1)
	printf("Stack Underflow");
	else
	printf("The deleted element is %d",a[top--]);
}
void peek()
{
	if(top==-1)
	printf("Stack Underflow");
	else
	printf("The first element is %d",a[top]);
}
void disp()
{
	int i;
	if(top==-1)
	printf("Stack underflow");
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\t",a[i]);
		}
	}
}
Output:

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:1
Enter the number:12

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:1
Enter the number:78

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:1
Enter the number:56

1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:2
The deleted element is 56
1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:4
78      12
1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:3
The first element is 78
1.PUSH
2.POP
3.PEEK
4.DISPLAY
5.EXIT
Enter your choice:5

Process returned 13 (0xD)   execution time : 48.472 s
Press any key to continue.
