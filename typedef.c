#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[50];
    int ID;
}stud;
int main() 
{
    stud s1;
    printf("Enter details of student~ \n");
    printf("Enter Student's Name: \n");
    scanf("%s",s1.name);
    printf("Enter Student's Unique ID: \n");
    scanf("%s",s1.ID);
    return 0;
}
