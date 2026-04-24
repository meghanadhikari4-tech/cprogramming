#include<stdio.h>
int main(){
	int i,j,n;
	float a[3][4],b[3][4],sum[3][4];
	printf("enter elements of matrix a:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("enter elements of matrix b:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%f",&b[i][j]);
        }
        for(i=0;i<3;i++)
        {
        	for(j=0;j<4;j++)
        	{
        		sum[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("\n sum of matrix:\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%0.2f\t",sum[i][j]);
			}
			printf("\n");
		}
		return 0;
}
}
