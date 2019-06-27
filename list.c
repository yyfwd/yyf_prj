#include<stdlib.h>
#inlcude<stdio.h>

typedef struct node
{
	int data;
	struct node *next;
}Node,*pNode;

pNode creat_list(pNode L)
{
	L = (pNode)malloc(sizeof(Node));
	if(!L)
		return 0;
	L->next = NULL;
	return L;
}

void print_list(pNode L)
{
	pNode p = L->next;
	printf("the list data:");
	while(p)
	{
		printf("%d",p->data);
		p = p->next;
	}
	printf("\n");
}

int insert_list(pNode L,int data,int pos)
{
	pNode p = L;
	pNode pnew;
	int i = 1
	while(p && i<pos)
	{
		p = p->next;
		++i;
	}
	if(!p || i>pos)   //如果插入该位超出或者插入位置是空指针  
		return 0;
	pnew = (pNode)malloc(sizeof(Node));
	pnew->data = data;
	pnew->next = p->next;
	p->next = pnew;
}