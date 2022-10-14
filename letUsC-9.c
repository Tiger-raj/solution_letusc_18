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
*/

// Given three variables x,y,z, write a function to circularly shift their values to right. In other words, if x = 5,y = 8, z = 10, after circular shift y = 5, z = 8, x = 10. Call the function with variables a,b,c to circularly shift values.
/*
#include <stdio.h>
void cirshift(int *, int *, int *);
int main()
{
    int x, y, z;
    printf("Enter values of x,y,z respectively.\n");
    scanf("%d%d%d", &x, &y, &z);
    cirshift(&x, &y, &z);
    printf("Circularly shifted values are :\n");
    printf("x : %d, y : %d, z : %d\n", x, y, z);
    return 0;
}
void cirshift(int *a, int *b, int *c)
{
    int t;
    t = *a;
    *a = *b;
    *b = *c;
    *c = t;
    return;
} */

// Define a function that receives weight of a commodity in kilograms and returns the equivalent weight in Grams, Tons and Pounds. Call this function from main() and print the results in main().
/*
#include <stdio.h>
void weigConv(float, float *, float *, float *);
int main()
{
    float ton, kg, g, pound;
    printf("Enter the weight in kilogram.\n");
    scanf("%f", &kg);
    weigConv(kg, &g, &ton, &pound);
    printf("Weight in grams : %f, tons : %f, pounds : %f\n", g, ton, pound);
    return 0;
}
void weigConv(float kg, float *g, float *t, float *p)
{
    *g = kg * 1000;
    *t = kg / 1000.0;
    *p = kg * 2.20462;
}*/

// Define a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1,y1), B(x2,y2) and C(x3,y3). Use these functions to develop a function which returns a value 1 if the point (x,y) lies inside the triangle ABC, otherwise return a value 0.

#include <stdio.h>
#include <math.h>

float calcDis(int, int, int, int);
float calcArea(float, float, float);
int main()
{
    int x1, x2, x3, x, y1, y2, y3, y;
    float ab, bc, ca, ap, bp, cp, area, a1, a2, a3;
    int sum;
    x1 = -2;
    x2 = 0;
    x3 = 3;
    y1 = 1;
    y2 = 8;
    y3 = 2;

    ab = calcDis(x1, y1, x2, y2);
    bc = calcDis(x2, y2, x3, y3);
    ca = calcDis(x3, y3, x1, y1);

    printf("Side AB : %f, BC : %f, CA : %f\n", ab, bc, ca);

    area = calcArea(ab, bc, ca);
    printf("Area of given triangle is : %f\n", floor(area));

    printf("Enter x and y of point which you want to check, whether it lies inside triangle or not.\n");
    scanf("%d%d", &x, &y);

    ap = calcDis(x1, y1, x, y);
    bp = calcDis(x2, y2, x, y);
    cp = calcDis(x3, y3, x, y);

    a1 = calcArea(ap, bp, ab);
    a2 = calcArea(cp, bp, bc);
    a3 = calcArea(ap, cp, ca);

    // printf("Sum of areas is : %f\n", floor(a1 + a2 + a3));
    if (area == (a1 + a2 + a3))
    {
        printf("1 : Point lies inside triangle.\n");
    }
    else
    {
        printf("0 : Point lies outside triangle.\n");
    }
    return 0;
}
float calcDis(int x1, int y1, int x2, int y2)
{
    float dis = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    return dis;
}

float calcArea(float ab, float bc, float ca)
{
    float s = (ab + bc + ca) / 2.0;
    float area = sqrt(s * (s - ab) * (s - bc) * (s - ca));
    return area;
}