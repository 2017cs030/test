#include<stdio.h>
int n;
int fib(int a);

int main(){
	int i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("%d",fib(i));
	return 0;
}
int fib(int a ){
	int x;
	if(a==0){
		
		return 0;

	}else if(a==1){
		
		
		return 1;
}else
		return (fib(a-1)+fib(a-2));
	
	
}
