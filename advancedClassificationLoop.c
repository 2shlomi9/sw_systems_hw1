/*Implementations of the functions (loop):
1.isArmstrong
2.isPalindrome
*/

/*#include NumClass.h : NumClass.h file include The declarations of the functions*/
#include "NumClass.h"
#include <stdio.h>
#include <math.h>

/*implementation of isArmstrong function*/
int isArmstrong(int x)
{
    int power = 0;
    int temp;
    int tempX = x;
    int sum = 0;
    while (tempX != 0)
    {
        temp = tempX % 10;
        power++;
        tempX /= 10;
    }
    tempX = x;
    while (tempX != 0)
    {
        temp = tempX % 10;
        sum += pow(temp, power);
        tempX /= 10;
    }
    if (sum == x)
    {
        return 1;
    }
    return 0;
}

int isPalindrome(int x)
{
    int rev;
    int sum = 0;
    int temp = x;
    while (temp != 0)
    {
        rev = temp % 10;
        sum = (sum * 10) + rev;
        temp/=10;

    }
    if (sum == x)
        {
            return 1;
            
        }

    return 0;
}
