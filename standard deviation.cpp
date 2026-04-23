#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float x[100],sum=0.0,squared_sum=0.0,xbar,standard_deviation;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
	}
	sum=0.0;
	for(i=0;i<n;i++)
	{
		sum=sum=x[i];
	}
	xbar=sum/n;
	for(i=0;i<n;i++)
	{
		squared_sum=squared_sum+pow(x[i]-xbar,2);
	}
	standard_deviation=sqrt(squared_sum/n);
	printf("standard deviation is %0.3f\n",standard_deviation);
	return 0;
}
