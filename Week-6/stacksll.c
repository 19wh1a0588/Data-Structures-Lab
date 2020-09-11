#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*top,*cur;
void push()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data\n");
	scanf("%d",&(cur->data));
	cur->link=top;
	top=cur;
}
void pop()
{
	cur=top;
	top=cur->link;
	printf("Deleted element is: %d\n",(cur->data));
	cur->link=NULL;
	free(cur);
}
void display()
{
	if(top==NULL)
	{
		printf("Stack underflow\n");
	}
	else
	{
		cur=top;
		printf("Stack->");
		while(cur!=NULL)
		{
			printf("%d->",cur->data);
			cur=cur->link;
		}
	}
}
void peek()
{
	printf("Peek is: %d\n",top->data);
}
int main()
{
        int ch;
        while(1)
        {
                printf("\n1-push\n2-pop\n3-disply\n4-peek\n5-exit\n");
                printf("enter your choice\n");
                scanf("%d",&ch);
                switch(ch)
                {
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: peek();
				break;
			case 5: exit(0);
		}
	}
	return 0;
}


