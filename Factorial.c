
#include<stdio.h>
//function prototype
long int fact(int n);
//function call
int main(){
	int n;
	printf("enter a positive integer:");
	scanf("%d",&n);
	printf("Factorial of %d= %ld",n,fact(n));
	return 0;
	
}
//function defination
long int fact(int n){
	if(n>1)
	   return n*fact(n-1);
	else
	   return 1;
}
