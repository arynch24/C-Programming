#include <stdio.h>
#include<string.h>
void main()
{
    struct student
    {
        int rno;
        float perc;
        char grade;
        char nature[15];
    }noob;

    struct student alok;//
    alok.rno = 44; //
    alok.perc = 92.45;//
    alok.grade = 'A';//
    strcpy(alok.nature,"good") ;


    printf("%d \n", alok.rno);
    printf("%f\n", alok.perc);
    printf("%c\n", alok.grade);
    printf("%s\n", alok.nature);
    

    struct student aryan = {025,93.4,'A'};//
    printf("%d \n", aryan.rno);
    printf("%f\n", aryan.perc);
    printf("%c\n", aryan.grade);
}