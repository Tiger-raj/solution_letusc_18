// Write a function to calculate factorial of a number entered.
/*
#include <stdio.h>
int calcfact(int);
int main()
{
    int num, fact;
    printf("Enter a number to get it's factorial.\n");
    scanf("%d", &num);
    fact = calcfact(num);
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
int calcfact(int a)
{
    int b = 1, i;
    for (i = 2; i <= a; i++)
    {
        b *= i;
    }
    return (b);
}
*/

// Write a function to calculate the value of a raised to b.
/*
#include <stdio.h>
float power(float, float);
int main()
{
    float a, b, res;
    printf("Enter two number a , b respectively such as to get a raise to power b.\n");
    scanf("%f%f", &a, &b);
    res = power(a, b);
    printf("%f raised to power %f is : %f\n", a, b, res);
    return 0;
}
float power(float x, float y)
{
    int i;
    float a = 1;
    for (i = 1; i <= y; i++)
    {
        a *= x;
    }
    return a;
}
*/

// Write a program to convert any given year into its Roman equivalent. Use this data : 1 - I , 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M.

#include <stdio.h>
void convRoman(int);
int main()
{
    int num, res;
    printf("Enter any year to convert it into it's Roman Equivalent.\n");
    scanf("%d", &num);
    res = convRoman(num);
    printf("Roman equivalent of inputted year is %d", res);
    return 0;
}
void convRoman(int a)
{
    a = 1988;
}