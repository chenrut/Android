#include<stdio.h>
#include<stdlib.h>
#include"����������.cpp"
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
	printf("��������(����-1��������):\n");
	scanf_s("%d", &num);
	while (num==-1)
	{
		printf("���������룺");
		scanf_s("%d", &num);
	}
	do
	{
		add(&list, num);
		scanf_s("%d", &num);
	} while (num != -1);
	print(&list);
	int a,b=0;
	printf("0Ϊ��������\n1Ϊ����������\n2Ϊ��ʾ����\n3Ϊ��������\n4Ϊɾ������\n");
	while (1) {
		printf("�����������ţ�");
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:b = 1; break;
		case 1:frees(&list);
			list.head = nullptr;
			list.tail = nullptr;
			printf("����������(����-1��������):\n");
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
		default:printf("�������������룺");break;
		}
		if (b)
			break;
	}
	frees(&list);
	printf("���˳�");
	return 0;
}

