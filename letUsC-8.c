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
/*

//              MY WAY (ik it's quite unoptimised and definetly a bad way of solving but this's all i was able to figure out in my first attempt :/)

#include <stdio.h>
void convRoman(int);
int main()
{
    int num, res;
    printf("Enter any year to convert it into it's Roman Equivalent.\n");
    scanf("%d", &num);
    printf("Roman equivalent of inputted year is ");
    convRoman(num);
    return 0;
}
void convRoman(int a)
{
    // a = 4988;
    int ones, tens, hund, thus;
    thus = a / 1000 * 1000;
    hund = a / 100 * 100 - thus;
    ones = a % 10;
    tens = a % 100 - ones;

    switch (thus)
    {
    case 1000:
        printf("m");
        break;
    case 2000:
        printf("mm");
        break;
    case 3000:
        printf("mmm");
    }

    switch (hund)
    {
    case 100:
        printf("c");
        break;
    case 200:
        printf("cc");
        break;
    case 300:
        printf("ccc");
        break;
    case 400:
        printf("cd");
        break;
    case 500:
        printf("d");
        break;
    case 600:
        printf("dc");
        break;
    case 700:
        printf("dcc");
        break;
    case 800:
        printf("dccc");
        break;
    case 900:
        printf("cm");
    }

    switch (tens)
    {
    case 10:
        printf("x");
        break;
    case 20:
        printf("xx");
        break;
    case 30:
        printf("xxx");
        break;
    case 40:
        printf("xl");
        break;
    case 50:
        printf("l");
        break;
    case 60:
        printf("lx");
        break;
    case 70:
        printf("lxx");
        break;
    case 80:
        printf("lxxx");
        break;
    case 90:
        printf("xc");
    }

    switch (ones)
    {
    case 1:
        printf("i");
        break;
    case 2:
        printf("ii");
        break;
    case 3:
        printf("iii");
        break;
    case 4:
        printf("iv");
        break;
    case 5:
        printf("v");
        break;
    case 6:
        printf("vi");
        break;
    case 7:
        printf("vii");
        break;
    case 8:
        printf("viii");
        break;
    case 9:
        printf("ix");
    }
}
*/
//          BOOK WAY (this method was difficult, i wasn't able to figure it out by myself, looked into book to understand it :/)

/*
#include <stdio.h>
int convRoman(int, int, char);

int main()
{
    int yr;
    printf("Enter any year to convert it into it's Roman Equivalent.\n");
    scanf("%d", &yr);
    yr = convRoman(yr, 1000, 'm');
    yr = convRoman(yr, 500, 'd');
    yr = convRoman(yr, 100, 'c');
    yr = convRoman(yr, 50, 'l');
    yr = convRoman(yr, 10, 'x');
    yr = convRoman(yr, 5, 'v');
    yr = convRoman(yr, 1, 'i');
    return 0;
}
int convRoman(int x, int y, char z)
{
    int i, j;
    j = x / y;
    for (i = 1; i <= j; i++)
        printf("%c", z);
    return (x % y);
}
*/
