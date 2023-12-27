/* 1.1. WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc) of an
educational institute and display all the data, using structure (Access the structure members using
pointer).
Input: 120045 Rahul Male 77
Output: Rollno.-120045, Name-Rahul, Gender-Male, Marks-77 */
#include <stdio.h>
#include <string.h>

struct Information {
    int roll_no;
    char name[30];
    char gender[10];
    float marks;
};

int main() {
    struct Information student;
    struct Information *ptr = &student;

    printf("enter the roll number: ");
    scanf("%d", &student.roll_no);

    printf("enter the name of the student: ");
    scanf("%s", student.name);

    printf("enter the gender: ");
    scanf("%s", student.gender);

    printf("enter the marks: ");
    scanf("%f", &student.marks);

    printf("%d\n", ptr->roll_no);
    printf("%s\n", ptr->name);
    printf("%s\n", ptr->gender);
    printf("%f\n", ptr->marks);

    return 0;
}
