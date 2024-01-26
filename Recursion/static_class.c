#include<stdio.h>
int f();
void main()
{
    printf("%d\n",f());
    printf("%d\n",f());
    printf("%d\n",f());
    
//static variable has a default initial value zero and 
//is initialized only once in its lifetime.
}
int f()
{
    static int cnt=0;//variables exists for entire program duration. 
    //allow a local variable to retain its previous value when the block is reenterd.

    // try removing static .
    ++cnt;
    return cnt;
}


/*
int passcode =12345;--> ie public
static int admin_passcode = 67890; ---> scope is limited within a file. ie private
int main()
{
    ....
}

if we use extern in another file \
extern int passcode; --> accessible
extern int admin_passcode; --> error
*/