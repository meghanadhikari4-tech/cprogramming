//wap to print reverse of a given num
#include<stdio.h>
int main(){
	int n, rem,rev=0;
	printf("enter the given num:");
	scanf("%d",&n);
	int original=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
printf("reverse of %d is %d", original, rev);

return 0;
	
}
