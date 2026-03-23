#include<stdio.h>
int main()
{
	int a=20,b=15,temp;
	printf("before swapping a:%d and b:%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a:%d and b:%d",a,b);
	return 0;
}
