#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	node* sag;
	node* sol;
};
node *agac = NULL;

node* ekle(node* agac, int x) {
	if (agac == NULL) {
		node *root = (node *)malloc(sizeof(node));
		root->data = x;
		root->sag = NULL;
		root->sol = NULL;
		return root;
	}
	if (x > agac->data) {
		agac->sag = ekle(agac->sag, x);
		return agac;
	}
	agac->sol = ekle(agac->sol, x);
	return agac;
}
void bastir_LDR(node *agac) { //aðaç içinde dolaþma fonksiyonu
	if (agac == NULL) {
		return;
	}
	bastir_LDR(agac->sag);
	printf("%d ", agac->data);
	bastir_LDR(agac->sol);
}
void findMax(node *r) { //Maksimum deðeri bulma
	while (r->sag != NULL) {
		r = r->sag;
	}
	printf(" MAX: %d ", r->data);
}
void findMin(node *r) { //Minimum deðeri bulma
	while (r->sol != NULL) {
		r = r->sol;
	}
	printf(" MIN: %d ", r->data);
}

/*
int bul(node *r, int aranan) {
	if (r == NULL)
		return -1;
	if (r->data == aranan)
		return 1;
	if (bul(r->sag, aranan) == 1) {
		printf("sayi bulundu ");
	}
	else if (bul(r->sol, aranan) == 1) {
		printf("sayi bulundu ");
	}
	else {
		printf("bulunamadi ");
	}

}*/
int main() {
	agac = ekle(agac, 12);
	agac = ekle(agac, 200);
	agac = ekle(agac, 213);
	agac = ekle(agac, 56);
	agac = ekle(agac, 24);
	agac = ekle(agac, 18);
	agac = ekle(agac, 27);
	agac = ekle(agac, 28);
	bastir_LDR(agac);
	//	bul(agac, 18);
	findMax(agac);
	findMin(agac);

	system("PAUSE");

}