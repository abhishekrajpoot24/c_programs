# include<conio.h>
# include<stdio.h>

struct node{
	int i,*j;
};

void main(){
	struct node a[2],*p;
	int b[2]={30,40};
	p=&a;
	
	a[0].i=10;
	a[1].i=20;
	a[0].j=b;
	
	//int x=++p->i;
	//int x=(++p)->i;
	//int x=(p++)->i;
	//int x= *p->j;
	//int x= *p->j++;
	//int x= 	(*p->j)++;
	//int x= 	*p++ ->j;
	printf("x : %d",x);
	
}
