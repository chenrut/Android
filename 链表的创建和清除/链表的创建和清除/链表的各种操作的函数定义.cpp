#include<stdio.h>
#include<stdlib.h>
#include"类型名定义.cpp"
void add(lists* list, int num)
{
	node* p;
	p = (node*)malloc(sizeof(node));
	p->next = nullptr;
	p->num = num;
	if (list->head) {
		list->tail->next = p;
	}
	else {
		list->head = p;
	}
	list->tail = p;
}

void print(lists* list)
{
	node* p;
	printf("当前链表为:\n");
	for (p = list->head; p; p = p->next) {
		printf("%d ", p->num);
	}
	printf("\n");
}

void frees(lists* list)
{
	node* p, * q;
	for (p = list->head, q = p->next; q; q = p->next) {
		free(p);
		p = q;
	}
}

void insert(lists* list) {
	node* p, * q;
	int a, c;
	printf("请输入插入的位置和数字：\n");
	scanf_s("%d %d", &a, &c);
	int b = 0;
	p = (node*)malloc(sizeof(node));
	p->num = c;
	switch (a) {
	case 0:printf("错误\n"); return;
	case 1:p->next = list->head;
		list->head = p; print(list);  return;
	default:
		for (q = list->head; q && b < a - 2; q = q->next, b++);
		if (q) {
			p->next = q->next;
			q->next = p;
			print(list);
			break;
		}
		else {
			printf("链表没有那么长\n"); return;
		}
	}
}

void deletes(lists* list) {
	node* p, * q;
	printf("请输入要删除的位置：\n");
	int a;
	scanf_s("%d", &a);
	if (a==1) {
		p = list->head;
		list->head = p->next;
		free(p);
		print(list);
	}
	else if (a<=0) {
		printf("错误");
	}
	else {
		a--;
		for (q = list->head,p=q->next; a > 1 && p; a--, p = p->next,q=q->next);
		if (p && p->next) {
			q->next = p->next;
			free(p);
			print(list);
		}else if (p) {
			q->next = nullptr;
			free(p);
			print(list);
		}else {
			printf("错误");
		}
	}
	
}
