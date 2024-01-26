#include <stdio.h>
#include<string.h>
void main()
{
    typedef struct student
    {
        int rno;
        float perc;
        char grade;
    }student;

    student s1={11,94.3,'A'};
    student s2 =s1;//deep copy

    printf("%c \n", s1.grade);
    printf("%c \n", s2.grade);
    s2.grade='B';
    printf("%c \n", s1.grade);
    printf("%c \n", s2.grade);
}