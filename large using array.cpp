//find large element using array
#include<stdio.h>
int main(){
	int i,n;
	float a[100],large;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	large=a[0];
	for(i=0;i<n;i++){
		if (a[i]>large)
	{
		large=a[i];
	}
}
printf("largest element=%0.3f",large);
return 0;
}
