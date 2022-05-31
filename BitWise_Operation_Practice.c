//C program to check Least Significant Bit (LSB) of a number is set or not
#include <stdio.h>

/*

    int main()
    {
    int num;

    Input number from user 
    printf("Enter any number: ");
    scanf("%d", &num);

     If (num & 1) evaluates to 1 
    if(num & 1)
        printf("LSB of %d is set (1).", num);
    else
        printf("LSB of %d is unset (0).", num);

    return 0;
    } 
*/
    


//C program to check Most Significant Bit (MSB) of a number is set or not
//#define bits = sizeof(int) * 8
//Data type size and range varies from machine and compiler. For some compiler size of integer is 2 bytes whereas for some size is 4 bytes.
//Hence, to get exact size of integer in bits I have used sizeof(int) * 8 where sizeof(int) returns bytes used by integer.

/*int main()
{
    int num = 80;
    int msb;
    
     msb = 1 << (BITS - 1); // shifting binary one by binary (BITS -1 ) 1 in 2 byte binary is  00000000 00000001

     Perform bitwise AND with msb and num 
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}
*/

//C program to get nth bit of a number

//int main()
//{

    //take user input number
    //take user input for bit to check
    //User input num
  //  int num = ;
    //nth bit to check
    //int bit = 2;
    //int bit_Status;
    //bit_Status = (num >> bit) & 1; // shifting binary one by binary (BITS -1 ) 1 in 2 byte binary is  00000000 00000001
    //if(bit_Status == 1)
      //  printf("The nth bit is 1);
    //else
    //    printf("The nth bit is 0);
    //return 0;
//}

//C program to set nth bit of a number


//int main()
//{

    //take user input number
    //take user input for bit to check
    //User input num
//    int num = 12 ;
    //nth bit to check
//    int bit = 0;
//    int bit_Status;
//    bit_Status = (1 << bit) | num ; // shifting binary one by binary 
//    printf("Number before setting %d bit: %d (in decimal)\n", bit_Status, num);
//    return 0;
//}


//C program to clear nth bit of a number

//int main()
//{

    //take user input number
    //take user input for bit to check
    //User input num
//    int num = 13 ;
    //nth bit to check
//    int bit = 0;
//    int bit_Status;

//    bit_Status = (~(1 << bit)) & num ; // Start with ONE (00000001) Shift left 
    //by bit (0) so ONE becomes (00000011) then apply ~ (unary complment operator) 
    //then binary ONE becomes (11111100) then & with binary 13 (00001101) therefore new number is 12 (00001100)

//    printf("Number after clearing %d bit: %d (in decimal)\n", bit_Status, num);
//    return 0;
//}

// C program to toggle or invert nth bit of a number
int main()
{

    //take user input number
    //take user input for bit to check
    //User input num
    int num = 13 ;
    //nth bit to check
    int bit = 0;
    int bit_Status;

    bit_Status = (~(1 << bit)) & num ; 

    printf("Number after clearing %d bit: %d (in decimal)\n", bit_Status, num);
    return 0;
}