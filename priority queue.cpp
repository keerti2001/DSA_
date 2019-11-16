#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
	int data,priority;
	struct node *next;
};
struct node *start=NULL;
struct node *insert(struct node*);
struct node *del(struct node*);
void display(struct node *);
int main()
{
	int option;
	do
	{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
		printf("Enter your option");
		scanf("%d",&option);
		switch(option)
		{
			case 1:start=insert(start);
			       break;
			case 2:start=del(start);
			       break;
			case 3:display(start);
			    break;
		}
	}while(option!=4);
	return 0;
}


struct node *insert(struct node *start)
{
	int val,pri;
	struct node *ptr,*p;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("enter the values of data and priority");
	scanf("%d %d",&val,&pri);
	ptr->data=val;
	ptr->priority=pri;
	if(start==NULL||pri<start->priority)
	{
		ptr->next=start;
		start=ptr;
	}
	else
	{
		p=start;
		while(p->next!=NULL&&p->next->priority<=pri)
		p=p->next;
		ptr->next=p->next;
		p->next=ptr;
	}
	return start;
}

struct node *del(struct node *start)
{
	struct node *ptr;
	if(start==NULL)
	{
		printf("underflow\n");
		return start;
	}
	else
	{
		ptr=start;
		printf("\nDeleted item is %d",ptr->data);
		start=start->next;
		free(ptr);
	}
	return start;
}

void display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	if(start==NULL)
	printf("\nQueue is Empty\n");
	else
	{
		printf("\nPriority Queue\n");
		while(ptr!=NULL)
		{
			printf("\t%d[priority=%d]",ptr->data,ptr->priority);
			ptr=ptr->next;
		}
	}
}
