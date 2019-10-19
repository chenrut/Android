#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int paimian;
	node* next;
}node;
typedef struct  {
	node* head;
	node* tail;
}lists;
void add(lists *list);
void frees(lists* list);
void paimian(lists* list);
int main() {
	lists list;
	list.head = nullptr;
	list.tail = nullptr;

	return 0;
}

void add(lists* list){
	node* p;
	p = (node*)malloc(sizeof(node));
	p->paimian = 0;
	if (list->head == nullptr) {
		list->head = p;
	}else{
		list->tail->next = p;
	}
	list->tail = p;
	list->tail->next = list->head;
}

void frees(lists* list){
	node* p, * q;
	p = list->head->next;
	q = list->head;
	do
	{
		free(q);
		q = p;
		p = q->next;
	} while (p=list->head);
}

void paimian(lists* list){

}
