# include<stdio.h>

struct node{
	int a;
	struct node * link;
};

void main(){
	struct node* l1= (struct node*)malloc(sizeof(struct node));
	printf("address of l1: %d\n",l1);
}
