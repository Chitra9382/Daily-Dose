#include<stdio.h>
int main()
{
 int n,i;
 unsigned long long fact=1;
 printf("enter the number ");
 scanf("%d",&n);
 if(n<0)
 	printf("error factorial of negative no dosent exist");
 	else
 		for(i=1;i<=n;i++){
 			fact*=i;
		 }
printf("factorial of %d=%llu",n,fact);


}
