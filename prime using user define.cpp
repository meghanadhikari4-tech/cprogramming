//prime or not using user defined function
#include<stdio.h>
int prime(int n);
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	if(prime(n)==1){
		printf("%d is prime");
	}
	else{
			printf("%d is not prime");
		}
		return 0;	
}
int prime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
