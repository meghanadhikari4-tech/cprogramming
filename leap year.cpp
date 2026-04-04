#include<stdio.h>
int main(){
	int year;
	printf("enter a year:");
	scanf("%d",&year);
	if(year%400==0){
		printf("the given year is leap year");
	}
	else if(year%4==0 && year%100!=0){
		printf("the given year is leap year");
	}
	else{
		printf("the given year is not leap year");
	}
	return 0;
}
