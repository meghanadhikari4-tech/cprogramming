//wap to print sum and average of a number using array
#include<stdio.h>
int main(){
    int n, i;
    float a[100], sum = 0, average;

    printf("enter the number: ");
    scanf("%d",&n);

    // Input
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%f",&a[i]);
    }

    // Sum calculation
    for(i = 0; i < n; i++){
        sum = sum + a[i];
    }

    // Average
    average = sum / n;

    printf("sum = %.3f\n", sum);
    printf("average = %.3f", average);

    return 0;
}
