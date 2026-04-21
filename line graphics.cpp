//program in c to draw a line using graphic function
#include<stdio.h>
#include<graphic.h>
int main(){
	int gd=DETECT gm;
	initgraph(&gd,&gm,"C:\\TURBO C3\\BGI")
	line(100,100,300,300);
	getch();
	closegraph();
	return 0;
	
}
