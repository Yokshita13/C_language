#include <stdio.h>
struct Date{
    int date;
    int month;
    int year;
};
struct Student{
    char name[20];
    int id;
    struct Date dob; //nested structure
};
int main() {
    struct Student s = {"Yokshita",46,{13,02,2007}};
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.id);
    
    printf("DOB: %d-%d-%d\n",s.dob.date,s.dob.month,s.dob.year);
    return 0;
}
