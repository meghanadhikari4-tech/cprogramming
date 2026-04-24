#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[30];
    int age;
    char address[30];
};

struct student s[30];

int main() {
    int i, n;
    FILE *fp;
    fp = fopen("student.txt", "w");
    if(fp == NULL) {
        printf("File cannot be created\n");
        exit(1);
    }

    printf("Enter number of records:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name age address:\n");
        scanf("%s %d %s", s[i].name, &s[i].age, s[i].address);

        fprintf(fp, "%s %d %s\n", s[i].name, s[i].age, s[i].address);
    }

    fclose(fp);

    // Step 2: Open file for reading
    fp = fopen("student.txt", "r");
    if(fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    printf("\nStudent details:\n");

    for(i = 0; i < n; i++) {
        fscanf(fp, "%s %d %s", s[i].name, &s[i].age, s[i].address);

        printf("Name=%s\tAge=%d\tAddress=%s\n",
               s[i].name, s[i].age, s[i].address);
    }

    fclose(fp);

    return 0;
}
