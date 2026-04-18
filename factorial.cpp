#include<stdio.h>
int main(){
	int n,i,fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<0){
		printf("factorial does not exist for negative no");
	}
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the factorial of %d is %d ",n,fact);
	return 0;
}

