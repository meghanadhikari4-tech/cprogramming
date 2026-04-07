//read m*n matrix from user and replace each element by 50
#include<stdio.h>
int main(){
    int i, j, m, n;
    float a[10][10];
    printf("enter rows and columns: ");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%f",&a[i][j]);
        }
    }
    printf("given matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i == 0){
                a[i][j] = 50;
            }
        }
    }
    printf("final matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
