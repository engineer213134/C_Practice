#include <stdio.h>
//C program to count number of digits in an integer

int main()
{
    int count;
    int num = 645666;
    while(num != 0){
        count++;
    }
    printf("Number of digits that are in the number are: %d" ,count);
    return 0;
}