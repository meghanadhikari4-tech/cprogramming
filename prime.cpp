#include<stdio.h>
int main(){
	int num,i,flag=0;
	printf("enter the num");
	scanf("%d",&num);
	if(num<=0){
		printf("it is not a prime number");
	}
	else{
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		if (flag==0){
			printf("%d is a prime no",num);
		}
		else{
			printf("%d is not a prime no",num);
		}
		
	}
	return 0;
}
