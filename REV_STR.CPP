#include<stdio.h>
#include<conio.h>
#include<string.h>
char str[81];
void rev(char str[],int s,int e);
int main()
{
	int l,s,e;
	printf("Enter a string:\n");
	gets(str);
	l=strlen(str);
	s=0;
	e=l-1;
	rev(str,s,e);
	printf("The reverse of the string is:");
	puts(str);
	return 0;
}
void rev(char str[],int s,int e)
{
	char t;
	if(s<e)
	{
		t=str[s];
		str[s]=str[e];
		str[e]=t;
		rev(str,s+1,e-1);
	}


}
Output:
    Enter a string:
Hello Varsha!!
The reverse of the string is:!!ahsraV olleH

Process returned 0 (0x0)   execution time : 18.617 s
Press any key to continue.
