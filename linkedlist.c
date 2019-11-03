#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	node* next;
};
node* ekle(node *root, int data) {
	if (root == NULL) {
		root = (node*)malloc(sizeof(node));
		root->data = data;
		root->next = NULL;
		return root;
	}
	node *iter = root;
	while (iter->next != NULL) {
		iter = iter->next;
	}
	iter->next = (node*)malloc(sizeof(node));
	iter->next->data = data;
	iter->next->next = NULL;
	return root;
}
void bastir(node *r) {
	while (r != NULL) {
		printf("%d \n", r->data);
		r = r->next;
	}
}
node* birlestir(node *d1, node *d2) {
	node*iter = d1;
	while (iter->next != NULL) {
		iter = iter->next;
	}
	iter->next = d2;
	return d1;
}

int main() {
	node* dugum = NULL;
	dugum = ekle(dugum, 51);
	dugum = ekle(dugum, 52);
	dugum = ekle(dugum, 53);

	printf("ilk dugum: \n");
	bastir(dugum);

	node *dugum2 = NULL;

	dugum2 = ekle(dugum2, 60);
	dugum2 = ekle(dugum2, 70);
	dugum2 = ekle(dugum2, 80);

	printf("ikinci dugum: \n");
	bastir(dugum2);

	node*final = birlestir(dugum, dugum2);
	printf("\n\nbirlesimi: \n");
	bastir(final);



	system("PAUSE");

}