#include<stdio.h>
#include<conio.h>
void move(int n,char source,char spare,char destination);
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	move(n,'A','C','B');
	return 0;
}
void move(int n,char s,char d,char sp)
{
	if(n==1)
	printf("\nMove from %c to %c",s,d);
	else
	{
		move(n-1,s,sp,d);
		move(1,s,d,sp);
		move(n-1,sp,d,s);
	}
}
Output:
    Enter the value of n:3

Move from A to C
Move from A to B
Move from C to B
Move from A to C
Move from B to A
Move from B to C
Move from A to C
Process returned 0 (0x0)   execution time : 2.479 s
Press any key to continue.
