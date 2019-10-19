typedef struct node {
	int num;
	struct node* next;
}node;
typedef struct {
	node* head;
	node* tail;
}lists;