#include<stdio.h>
int main(){
	float num;
	printf("enter any number:");
	scanf("%f", &num);
	if (num>0.0){
	printf("the given number is positive");
	}
	else if(num<0.0){
		printf("the given number is negative:");
	}
	else {
		printf("the given number is zero");
	}
	return 0;
}
