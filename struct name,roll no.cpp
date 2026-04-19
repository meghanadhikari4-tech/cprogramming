//wap to create a structure having name,roll no,member and roll no greater than 20
#include<stdio.h>
struct student{
	int roll_no;
	char name[20];
};
struct student s[100];
int main(){
	int i,n;
	printf("enter the records of student:");
	scanf("%d",&n);
	printf("enter the details of student:");
	for(i=0;i<n;i++){
		printf("enter rollno:");
		scanf("%d",&s[i].roll_no);
		printf("enter name");
		fflush(stdin);
		gets(s[i].name);
	}
	printf("\n students details having roll no greater than 20:");
	for(i=0;i<n;i++)
	{
		if (s[i].roll_no>20)
		{
			printf("roll_no=%s\t name=%s\t",s[i].roll_no,s[i].name);
		}
	}
	return 0;
}
