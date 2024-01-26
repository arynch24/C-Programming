#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int random_num;
    //srand want a seed value to change the random no otherwise the same random no willl print again and again
    srand(time(0));//time(0) changes time at every second from 1 jan 1970 in second
    random_num=rand()%6+1;//rand() = 0 to rand_max ie 2^31-1
    printf("%ld \n",time(0));
    printf("Random no between 1 & 6 is:  %d ",random_num);
    return 0;

    //rand()%6 gives value between 0 & 1.

}