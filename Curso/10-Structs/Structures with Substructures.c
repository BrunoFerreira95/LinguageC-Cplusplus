#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day;
    int month;
    int year;
}Date;

struct student {
    int id;
    Date birth;
};
int main(){

    // Defining student
    struct student Student;

    // Modifying values
    Student.id = 1;
    Student.birth.day = 4;
    Student.birth.month = 12;
    Student.birth.year = 1995;

    // Printing values
    printf("Birth in: %d / %d / %d\n",Student.birth.month,Student.birth.day,Student.birth.year);

    system("pause");
    return 0;
}
