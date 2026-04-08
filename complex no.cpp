//wap in c to multiply two complex number in c
#include<stdio.h>
typedef struct{
	int real;
	int img;
}complex;
int main(){
    complex c1, c2;
    int mul_real, mul_img;

    printf("enter real and imag part of first complex no:");
    scanf("%d%d",&c1.real,&c1.img);
    printf("enter real and imag part of second complex no:");
    scanf("%d%d",&c2.real,&c2.img);
    mul_real=c1.real*c2.real-c1.img*c2.img;
    mul_img=c1.real*c2.img+c2.real*c1.img;
    printf("product=%d+%di", mul_real, mul_img);
    
    return 0;
}

