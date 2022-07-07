#include<stdio.h>
long long int fact(int);

int main(){
	int x;
	long long int f;
	
	printf("Enter a number for which factorial is to be determinded:\n");
	scanf("%d",&x);
	f = fact(x);
	printf("\nFactorial %11d", f);
	return 0;
}

long long int fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return(n*fact(n-1));
	}
}
