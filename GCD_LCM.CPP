#include<stdio.h>
#include<conio.h>
int gcd(int a,int b);
int main()
{
	int x,y,g,l;
	printf("Enter the two numbers:");
	scanf("%d%d",&x,&y);
	g=gcd(x,y);
	l=(x*y)/g;
	printf("The GCD and LCM are %d and %d.",g,l);
	return 0;
}
int gcd(int a,int b)
{
	if(a%b==0)
	return(b);
	else
	return(gcd(b,a%b));
}
Output:
    Enter the two numbers:36
90
The GCD and LCM are 18 and 180.
Process returned 0 (0x0)   execution time : 8.596 s
Press any key to continue.
