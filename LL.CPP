#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node * c_ll(struct node *);
struct node * disp(struct node *);
struct node * insert_beg(struct node *);
struct node * insert_end(struct node *);
struct node * insert_aft(struct node *);
struct node * insert_bef(struct node *);
struct node * del_beg(struct node *);
struct node * del_end(struct node *);
struct node * del_aft(struct node *);
struct node * del_bef(struct node *);
struct node * del_list(struct node *);
struct node * sort_list(struct node *);
struct node * del_node(struct node *);
int main()
{
	int ch;
	do
	{
		printf("1.Create\n2.Display\n");
		printf("3.Insert at begining\n4.Insert at end\n");
		printf("5.Insert before any element\n");
		printf("6.Insert after any element\n7.Delete at end\n");
		printf("8.Delete at begining\n9.Delete after any element\n");
		printf("10.Delete before any element\n");
		printf("11.Delete the entire list\n12.Delete a node\n");
		printf("13.Sort the list\n14.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:start=c_ll(start);
				break;
			case 2:start=disp(start);
				break;
			case 3:start=insert_beg(start);
				break;
			case 4:start=insert_end(start);
				break;
			case 5:start=insert_bef(start);
				break;
			case 6:start=insert_aft(start);
				break;
			case 7:start=del_end(start);
				break;
			case 8:start=del_beg(start);
				break;
			case 9:start=del_aft(start);
				break;
			case 10:start=del_bef(start);
				break;
			case 11:start=del_list(start);
				break;
			case 12:start=del_node(start);
				break;
			case 13:start=sort_list(start);
				break;
            default:printf("Invalid Input");

		}
	}while(ch!=14);
	return 0;
}
struct node * c_ll(struct node *start)
{
	struct node *n_n,*ptr;
	int num;
	printf("Enter -1 to stop");
	printf("\nEnter a number:");
	scanf("%d",&num);
	while(num!=-1)
	{
		n_n=(struct node*)malloc(sizeof(struct node));
		n_n->data=num;
		if(start==NULL)
		{
			n_n->next=NULL;
			start=n_n;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=n_n;
			n_n->next=NULL;
		}
		printf("\nEnter a number:");
		scanf("%d",&num);
	}
	return(start);
}
struct node * disp(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("The data is %d\n",ptr->data);
		ptr=ptr->next;
	}
	return(start);

}
struct node * insert_beg(struct node *start)
{
	struct node *n_n;
	int num;
	n_n=(struct node*)malloc(sizeof(struct node));
	printf("Enter a number:");
	scanf("%d",&num);
	n_n->data=num;
	n_n->next=start;
	start=n_n;
	return(start);
}
struct node * insert_end(struct node *start)
{
	struct node *n_n,*ptr;
	int num;
	ptr=start;
	n_n=(struct node*)malloc(sizeof(struct node));
	printf("Enter a number:");
	scanf("%d",&num);
	n_n->data=num;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	n_n->next=NULL;
	ptr->next=n_n;
	return(start);
}
struct node * insert_aft(struct node *start)
{
	struct node *n_n,*ptr,*post_ptr;
	int num,val;
	printf("Enter a number and a value after which you want to insert:");
	scanf("%d%d",&num,&val);
	n_n=(struct node*)malloc(sizeof(struct node));
	n_n->data=num;
	ptr=start;
	while(ptr->data!=val)
	{
		ptr=ptr->next;
	}
	post_ptr=ptr->next;
	n_n->next=post_ptr;
	ptr->next=n_n;
	return(start);
}
struct node * insert_bef(struct node *start)
{
	struct node *n_n,*ptr,*pp;
	int num,val;
	printf("Enter a number and value before which you want to insert:");
	scanf("%d%d",&num,&val);
	n_n=(struct node *)malloc(sizeof(struct node));
	n_n->data=num;
	ptr=start;
	while(ptr->data!=val)
	{
		pp=ptr;
		ptr=ptr->next;
	}
	n_n->next=ptr;
	pp->next=n_n;
	return(start);
}
struct node * del_beg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=ptr->next;
	free(ptr);
	return(start);
}
struct node * del_end(struct node *start)
{
	struct node *ptr,*pp;
	ptr=start;
	while(ptr->next!=NULL)
	{
		pp=ptr;
		ptr=ptr->next;
	}
	pp->next=NULL;
	free(ptr);
	return(start);
}
struct node * del_aft(struct node *start)
{
	struct node *ptr,*pp;
	int num;
	ptr=start;
	pp=start;
	printf("Enter the value after which you want to delete:");
	scanf("%d",&num);
	while(pp->data!=num)
	{
		pp=ptr;
		ptr=ptr->next;
	}
	pp->next=ptr->next;
	free(ptr);
	return(start);
}
struct node * del_bef(struct node *start)
{
	struct node *ptr,*pp;
	ptr=start;
	int num;
	printf("Enter the value after which you want to delete:");
	scanf("%d",&num);
	while(ptr->next->data!=num)
	{
		pp=ptr;
		ptr=ptr->next;
	}
	pp->next=ptr->next;
	free(ptr);
	return(start);
}
struct node * del_node(struct node *start)
{
	struct node *ptr,*pp;
	ptr=start;
	int num;
	printf("Enter the value of the node which you want to delete:");
	scanf("%d",&num);
	if(ptr->data==num)
	{
		start=del_beg(start);
		return(start);
	}
	else
	{
		while(ptr->data!=num)
		{
			pp=ptr;
			ptr=ptr->next;
		}
		pp->next=ptr->next;
		free(ptr);
		return(start);
	}
}
struct node * del_list(struct node *start)
{
	struct node *ptr;
	ptr=start;
	if(ptr!=NULL)
	{
		while(ptr!=NULL)
		{
			printf("\nNode being delete is %d",ptr->data);
			ptr=del_beg(ptr);
		}
	}
	return(ptr);
}
struct node * sort_list(struct node *start)
{
	struct node *ptr1,*ptr2;
	int temp;
	ptr1=start;
	while(ptr1->next!=NULL)
	{
		ptr2=ptr1->next;
		while(ptr2!=NULL)
		{
			if(ptr1->data>ptr2->data)
			{
				temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	return(start);
}
Output:
    1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:1
Enter -1 to stop
Enter a number:12

Enter a number:1

Enter a number:100

Enter a number:-1
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:3
Enter a number:45
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:4
Enter a number:7
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:5
Enter a number and value before which you want to insert:78
1
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:6
Enter a number and a value after which you want to insert:87
100
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:7
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:8
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:9
Enter the value after which you want to delete:78
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:10
Enter the value after which you want to delete:87
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:13
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:2
The data is 12
The data is 78
The data is 87
1.Create
2.Display
3.Insert at begining
4.Insert at end
5.Insert before any element
6.Insert after any element
7.Delete at end
8.Delete at begining
9.Delete after any element
10.Delete before any element
11.Delete the entire list
12.Delete a node
13.Sort the list
14.Exit
Enter your choice:14

Process returned -1073741819 (0xC0000005)   execution time : 82.919 s
Press any key to continue.



