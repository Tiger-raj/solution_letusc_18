// Write a function which receives 5 integers and returns sum, average and standard deviation of these numbers. Call this function from main() and print the results in main().
/*
#include <stdio.h>
#include <math.h>
void fun(int *, float *, float *);

int main()
{
    int sum;
    float avg, std;
    fun(&sum, &avg, &std);
    printf("Sum of these numbers is : %d, average is : %f, standard deviation is : %f.\n", sum, avg, std);
    return 0;
}
void fun(int *x, float *y, float *z)
{
    int a, c, b, d, e;
    printf("Enter five numbers :\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    *x = a + b + c + d + e;
    *y = *x / 5.0;
    *z = sqrt((pow(a - *y, 2) + pow(b - *y, 2) + pow(c - *y, 2) + pow(d - *y, 2) + pow(e - *y, 2)) / 5.0);
} */

// Write a program that defines a function that calculates power of one number raised to another and factorial value of a number in one call.
/*
#include <stdio.h>
void calc(int, int, int, int *, int *);
int main()
{
    int a, b, c, fact = 1, power = 1;
    printf("Enter number and power that it should be raised to, respectively.\n");
    scanf("%d%d", &a, &b);
    printf("Enter number whose factorial you want to calculate.\n");
    scanf("%d", &c);
    calc(a, b, c, &fact, &power);
    printf("%d raised to %d is : %d \nFactorial of %d is : %d\n", a, b, power, c, fact);
    return 0;
}
void calc(int a, int b, int c, int *fact, int *power)
{
    int i = 1;
    for (i = 2; i <= c; i++)
    {
        *fact *= i;
    }
    for (i = 0; i < b; i++)
    {
        *power *= a;
    }
}*/
/*
#include <stdio.h>

int main()
{
    float a = 3.14, *b, **c;
    b = &a;
    c = &b;
    printf("%f  %p  %p\n", a, b, c);
    printf("%p %p %p\n", &a, &b, &c);
    printf("%f %f %f", a, *b, **c);
    return 0;
}
* /
