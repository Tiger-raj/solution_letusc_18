// SOLVED PROBLEMS
// Problem 3.2
// Input an integer and check wheather it's even or odd
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("Enter an integer\n");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//         printf("Entered integer is even\n");
//     else
//         printf("Entered integer is odd\n");
//     return 0;
// }

// Finding whether input year is leap year or not
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int yr;
    printf("Enter any year\n");
    scanf("%d", &yr);
    if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
            printf("Leap year\n");
        else
            printf("NOT a Leap year\n");
    }
    else
    {
        if (yr % 4 == 0)
            printf("Leap year\n");
        else
            printf("NOT a Leap year\n");
    }
    return 0;
}
*/
//                      BACK EXERCISE
// Q1)Input a five digit number and reverse it and check whether both are equal or not.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input, num, rev;
    printf("Enter a five digit number\n");
    scanf("%d", &input);
    num = input;
    rev = num % 10 * 10000;
    num /= 10;
    rev += num % 10 * 1000;
    num /= 10;
    rev += num % 10 * 100;
    num /= 10;
    rev += num % 10 * 10;
    num /= 10;
    rev += num % 10;
    num /= 10;
    printf("Reversed number is %d\n", rev);
    if (rev == input)
        printf("Both numbers are equal\n");
    else
        printf("Both numbers are different\n");
    return 0;
}
*/

// Q2)Input age of Ram, Shyam and Ajay respectively and find out the youngest one among them.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float ageR, ageS, ageA;
    printf("Enter age of Ram, Shyam and Ajay respectively\n");
    scanf("%f%f%f", &ageR, &ageS, &ageA);
    if (ageR < ageS)
    {
        if (ageR < ageA)
            printf("Ram is youngest of all three\n");
        else
            printf("Ajay is youngest of all three\n");
    }
    else
    {
        if (ageA < ageS)
            printf("Ajay is youngest of all three\n");
        else
            printf("Shyam is youngest of all three\n");
    }
    return 0;
}
*/
// Q3)Enter three angles of a triangle and check whether the triangle is valid or not by verifying whether sum of all angles is 180 or not.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ang1, ang2, ang3;
    printf("Enter three angles of a triangle\n");
    scanf("%d%d%d", &ang1, &ang2, &ang3);
    if (ang1 + ang2 + ang3 == 180)
        printf("The triangle is valid\n");
    else
        printf("The triangle is not valid\n");
    return 0;
}
*/

// Q4)Find absolute value of number entered
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter any number\n");
    scanf("%d", &num);
    if (num < 0)
    {
        num = -num;
        printf("Absolute value of entered number is %d\n", num);
    }
    else
        printf("Absolute value of entered number is %d\n", num);
    return 0;
}
*/

// Q5) Take length and breadth of a rectangle and find out whether area of rectangle is greater than its perimeter.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int len, bred, area, per;
    printf("Enter length and breadth of rectangle respectively.\n");
    scanf("%d%d", &len, &bred);
    area = len * bred;
    per = 2 * (len + bred);
    if (area > per)
    {
        printf("Area is greater than perimeter.\n");
    }
    if (area < per)
    {
        printf("Perimeter is greater than area.\n");
    }
    if (area == per)
    {
        printf("Perimeter is equal to area.\n");
    }
    return 0;
*/

// Q6)Input three points of Cartesian Plane (x1,y1), (x2,y2), (x3,y3) and check whether they lie on one straight line.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float x1, y1, x2, y2, x3, y3, m1, m2;
    printf("Input three points of Cartesian Plane (x1,y1), (x2,y2), (x3,y3) in the order mentioned, each value separated by space/enter/tab.\n");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y1) / (x3 - x1);
    if (m1 == m2)
        printf("All points lie on one straight line.\n");
    else
        printf("All points don't lie on one straight line.\n");
    return 0;
}
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c;
    a = 1;
    b = 0;
    c = a / b;
    printf("%d", c);
    return 0;
}
