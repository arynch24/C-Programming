#include<stdio.h>
void main()
{
    char *str="aryan";
    printf("%s",str);
    str="Mryan";// error 
    printf("%s\n",str);


    //----------------

    // char *ptr ="Physics Wallah";
    // printf("%s\n",ptr);
    // ptr="College Wallah";//Works Perfectly
    // //bcz pointers change the address to 
    // //which they point after intiatialising a new character array
    // printf("%s",ptr);

    //--------------------

    // char str[]="aryan";
    // printf("%s\n",str);
    // str="kryan";//error
    // printf("%s \n",str);



}