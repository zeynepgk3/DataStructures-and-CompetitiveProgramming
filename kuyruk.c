#include <stdio.h>
#include <stdlib.h>

struct N {
	int data;
	struct N* next;
};

typedef N node;

node* root = NULL;
node* son = NULL;

void deq() {
	if (root == NULL) {
		printf("Kuyruk bos");
	}
	else {
		node *temp = root;
		root = root->next;
		free(temp);
	}
}

void enq(int sayi) {
	if (root == NULL) {
		root = (node *)malloc(sizeof(node));
		root->data = sayi;
		root->next = NULL;
		son = root;
	}
	else {
		son->next = (node *)malloc(sizeof(node));
		son = son->next;
		son->data = sayi;
		son->next = NULL;

	}
}
void bastir() {
	if (root == NULL)
		printf("kuyruk bos");
	node *iter = root;
	while (iter != NULL) {
		printf("%d ", iter->data);
		iter = iter->next;
	}

}

int main() {
	enq(10);
	enq(20);
	enq(30);
	bastir();

	deq();
	bastir();



	system("PAUSE");



}