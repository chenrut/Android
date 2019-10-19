#include<stdio.h>
#include<stdlib.h>
#include"类型名定义.cpp"
void add(lists *list,int num);
void print(lists* list);
void frees(lists* list);
void insert(lists* list);
void deletes(lists* list);
int main() {
	int num;
	lists list;
	list.head = nullptr;
	list.tail = nullptr;
	printf("创建链表(输入-1结束创建):\n");
	scanf_s("%d", &num);
	while (num==-1)
	{
		printf("请重新输入：");
		scanf_s("%d", &num);
	}
	do
	{
		add(&list, num);
		scanf_s("%d", &num);
	} while (num != -1);
	print(&list);
	int a,b=0;
	printf("0为结束程序\n1为创建新链表\n2为显示链表\n3为插入数据\n4为删除数据\n");
	while (1) {
		printf("请输入操作序号：");
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:b = 1; break;
		case 1:frees(&list);
			list.head = nullptr;
			list.tail = nullptr;
			printf("创建新链表(输入-1结束创建):\n");
			scanf_s("%d", &num);
			do
			{
				add(&list, num);
				scanf_s("%d", &num);
			} while (num != -1);
			print(&list);
			break;
		case 2:print(&list); break;
		case 3:insert(&list); break;
		case 4:deletes(&list); break;
		default:printf("错误，请重新输入：");break;
		}
		if (b)
			break;
	}
	frees(&list);
	printf("已退出");
	return 0;
}

