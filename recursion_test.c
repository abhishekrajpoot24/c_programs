# include<stdio.h>

void a(int n){
	if(n==0){
		return;
	}
	printf("%d ",n);
	a(n-1);
	printf("%d ",n);
}

void main(){
	a(5);
}
