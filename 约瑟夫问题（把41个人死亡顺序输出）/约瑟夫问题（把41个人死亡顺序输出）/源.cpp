#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int num;
	int shunxu;
	struct node* next;
}node;
typedef struct {
	node* head;
	node* tail;
}lists;
void add(lists *list,int a,int shunxu);
void print(lists* list);
void siwang(lists* list);
int shushu(lists* list);
void frees(lists* list);
int main() {
	lists list;
	list.head = nullptr;
	list.tail = nullptr;
	int a = 0,shunxu=0;
	do
	{
		a++;
		add(&list,a,shunxu);
	} while (a!=41);

	siwang(&list);
	print(&list);
	frees(&list);
	return 0;
}

void add(lists* list, int a,int shunxu)
{
	node* p;
	p = (node*)malloc(sizeof(node));
	p->next = nullptr;
	p->num = a;
	p->shunxu = shunxu;
	if (list->head) {
		list->tail->next = p;
	}
	else {
		list->head = p;
	}
	list->tail = p;
	list->tail->next = list->head;
}
void print(lists* list)
{
	node* p;
	p = list->head;
	int a=1;
	printf("��ǰ����Ϊ:\n");
	do
	{
		printf("%d:%d\t", p->num,p->shunxu);
		if (a == 6)
		{
			printf("\n");
			a = 0;
		}
		p = p->next;
		a++;
	} while (p!=list->head);
	printf("\n");
}

void siwang(lists* list){
	int a=1,b=1,c=1;
	node* p;
	for (p=list->head;c!=0;p=p->next) {
		if (a==3&&p->shunxu==0) {
			a = 0;
			p->shunxu = b;
			b++;
			a++;
		}
		if(p->shunxu==0)
		a++;
		c=shushu(list);
	}
}

int shushu(lists* list){
	node* p;
	p = list->head;
	int a = 0;
	do
	{
		if (p->shunxu==0)
			a++;
		p = p->next;
	} while (p != list->head);
	return a;
}
void frees(lists* list)
{
	node* p, * q;
	list->tail->next = nullptr;
	for (p = list->head, q = p->next; q; q = p->next) {
		free(p);
		p = q;
	}
}
