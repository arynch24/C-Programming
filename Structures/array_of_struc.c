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

    student arr[3];//
    arr[0].rno = 44; //
    arr[0].perc = 92.45;//
    arr[0].grade = 'A';//
    
    printf("%d \n", arr[0].rno);
    printf("%f\n", arr[0].perc);
    printf("%c\n", arr[0].grade);
    
    student s = {025,93.4,'A'};
    arr[1]=s;
  
    printf("%d \n", arr[1].rno);
    printf("%f\n", arr[1].perc);
    printf("%c\n", arr[1].grade);
}