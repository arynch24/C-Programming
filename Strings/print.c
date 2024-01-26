#include<stdio.h>
void main()
{
char a[]={'A','r','y','a','n'};// size is 5 for character
char b[]="Ary\0an";//size is 7 as it contsins \0 at last also in string only
//one extra char is there at last of the string by default that is \0(null value)
int n = sizeof(a)/sizeof(a[0]);
printf("%d %d  \n",sizeof(a),sizeof(b) );

for (int i=0;i<n;i++)
{
    printf("%c \n",a[i]);
}
puts(b);

printf("\n%s",a);// %s,%d,%c etc are format specifiers.
printf("\n%s \n",b);//here in case of string the last char is \0 so it ends there only

}
