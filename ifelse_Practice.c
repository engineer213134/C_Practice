#include <stdio.h>
//C program to check Leap Year


int main()
{

   
    int num = 13 ;
    //nth bit to check
    int bit = 0;
    int bit_Status;

    bit_Status = (~(1 << bit)) & num ; 

    printf("Number after clearing %d bit: %d (in decimal)\n", bit_Status, num);
    return 0;
}