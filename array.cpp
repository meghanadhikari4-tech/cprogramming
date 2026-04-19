#include<stdio.h>
int main()
{
	int n,i,a[50];
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("given matrix is:");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
