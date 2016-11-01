# include<stdio.h>
int fun(int a, int b){
	int val;
	if(a==0) val=b+1;
	else if(b==0) val=fun(a-1,1);
	else val=fun(a-1,fun(a,b-1));
	return val;
}

void main(){
	int x=fun(2,1);
	int y=fun(1,2);
	int z=fun(0,5);
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
}
