#include <iostream>
#include <cstdlib>

typedef struct Node Node;
struct Node {
	int data;
	Node  *next;
};

void print(Node *list)
{
for(Node*p=list;p!=NULL;p->next)
{
print("%d", p->data);
}
printf("\n");
}

int main()
{
	Node *list = NULL;
	Node a = {3}, b={17}, c={21}, t={10};
	list = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	print(list);

	Node *p = malloc(sizeof(Node));

	t.next = &a;
	list = &t;

	print(list);
	return 0;

}
