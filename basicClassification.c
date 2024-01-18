/*Implementations of the functions :
1.isStrong
2.isPrime
*/

/*#include NumClass.h : NumClass.h file include The declarations of the functions*/
#include "NumClass.h"
#include <stdio.h>
#include <math.h>

/*implementation of isPrime function*/
int isPrime(int x)
{
    if (x == 1 || x == 2)
        return 1;
    for (int i = 2; i <=x / 2; i++)
    {
        if (x % i == 0){
            return 0;
        }
}
return 1;
}
/*implementation of isStrong function*/
int Factorial(int x)
{
    int fact = 1;
    int i;
    for (i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int isStrong(int x)
{
    int sum = 0;
    int temp;
    int sumCheck = x;
    while (x != 0)
    {
        (x > 10) ? (temp = x % 10) : (temp = x);
        sum += Factorial(temp);
        x = x / 10;
    }
    if (sum == sumCheck){
        return 1;
    } 
    return 0;
}
