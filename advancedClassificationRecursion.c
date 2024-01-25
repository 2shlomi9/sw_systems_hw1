/*Implementations of the functions (Recursion):
1.isArmstrong
2.isPalindrome
*/

/*#include NumClass.h : NumClass.h file include The declarations of the functions*/
#include "NumClass.h"
#include <stdio.h>

/*implementation of isArmstrong function*/
int powInt(int x,int y){
    int count = 1;
    for(int i=0; i<y;i++){
        count = count*x;
    }
    return count;
}

int Armstrong(int x, int len)
{
    if (x == 0)
    {
        return 0;
    }
    if (x > 0)
    {
        return (powInt(x % 10, len) + Armstrong(x / 10, len));
    }
    return 0;
}

int isArmstrong(int x)
{
    int len = 0;
    int tmp = x;
    while (tmp > 0)
    {
        len++;
        tmp = tmp / 10;
    }
    if (x == Armstrong(x, len))
    {
        return 1;
    }
    return 0;
}

int reverse(int x, int rev)
{
    if (x == 0)
    {
        return rev;
    }
    rev = (rev * 10) + (x % 10);
    return reverse(x / 10, rev);
}

int isPalindrome(int x)
{
    if ((reverse(x, 0)) != x)
    {
        return 0;
    }

    return 1;
}
