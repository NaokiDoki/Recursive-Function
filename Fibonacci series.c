#include<stdio.h>
int fib(int);
int x;

int main(){
	int f,i=0;
	
	printf("Enter a number up to which sequence is to be determinded:\n");
	scanf("%d", &x);
	
	while(fib(i) <= x){
		f = fib(i);
		printf("%d\t",f);
		i++;
	}
	return 0;
}

int fib(int a){
	
	if(a == 0){
		return 0;
	}
	else if(a == 1){
		return 1;
	}
	else{
		return(fib(a-1)+fib(a-2));
	}
}
