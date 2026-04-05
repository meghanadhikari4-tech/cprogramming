//wap to check whether a given character is vowel or not
#include<stdio.h>
int main(){
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		printf("the given character is vowel");
		
	}
	else{
		printf("the given character is not vowel");
	}
	return 0;

}
