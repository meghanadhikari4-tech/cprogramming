#include<stdio.h>
#include<conio.h>
int main(){
	int ch;
	printf("enter a character:");
	ch=getchar();
	printf("char=%c",ch);
	printf("enter a character:");
	ch=getch();
	printf("char=%c",ch);
	printf("enter a character:");
	ch=getche();
	printf("char=%c",ch);
	return 0;
}
