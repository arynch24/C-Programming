#include <stdio.h>
void england()
{
    printf("I am in england.");
    return;
}

void main()
{
    printf("I am in main.\n");
    void india(); // write this for no warning or an error 
    india();//here we called india make sure that india function is defined above.
}
void india()
{
    printf("I am in India.\n");
    void england(); 
    england();
}
