//swap by pointer
#include<stdio.h>
void swapbyRef(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int a=10,b=20;
	printf("before swap a=%d & b=%d\n",a,b);
	swapbyRef(&a,&b);
	printf("after swap a=%d & b=%d\n",a,b);
	return 0;
}
