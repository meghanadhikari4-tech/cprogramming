#include<stdio.h>
int main()
{
	int n,rem,rev=0,original;
	printf("enter a num:");
	scanf("%d",&n);
	original=n;
	do{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	while(n!=0);
	if(original==rev){
		printf("the given n is palindrome");
	}
	else{
		printf("the given n is not palindrome");
	}
	return 0;
}
