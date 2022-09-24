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
    if ((x2 - x1) == 0 && (x3 - x1) == 0)
        printf("All points lie on one straight line.\n");
    if (((x2 - x1) == 0 && (x3 - x1) != 0) || (x2 - x1) != 0 && (x3 - x1) == 0)
        printf("All points don't lie on one straight line.\n");
    if ((x2 - x1) != 0 && (x3 - x1) != 0)
    {
        if (m1 == m2)
            printf("All points lie on one straight line.\n");
        else
            printf("All points don't lie on one straight line.\n");
    }
    return 0;
}
*/

// Q7)Coordinate of center (x1,y1) and radius r of a circle is given, find out whether a point lies inside, outside or on the circle.
/*
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x1, y1, r, x, y, s1;
    printf("Enter coordinates of center of circle (x1,y1).\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter radius of circle.\n");
    scanf("%f", &r);
    printf("Enter coordinates of point to check it's position (x,y).\n");
    scanf("%f%f", &x, &y);
    s1 = pow((x - x1), 2) + pow((y - y1), 2) - r * r;
    if (s1 > 0)
        printf("Point lies outside the circle.\n");
    if (s1 < 0)
        printf("Point lies inside the circle.\n");
    if (s1 == 0)
        printf("Point lies on the circle.\n");
    return 0;
}
*/

// Q8)A point is given, check whether it lies on x-axis, y-axis or origin
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float x, y;
    printf("Enter cooridnates of point (x,y).\n");
    scanf("%f%f", &x, &y);
    if (x == 0)
        printf("Point lies on y-axis.\n");
    if (y == 0)
        printf("Point lies on x-axis.\n");
    if (y == 0 && x == 0)
        printf("Point lies on origin.\n");
    if (y != 0 && x != 0)
        printf("Point does not lies on any axis or origin.\n");
    return 0;
}
*/
// Q9)It was Monday on 01/01/01 according to Gregorian Calendar. Find out day on 1st January of any year entered.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year, noy, nod, rem;
    printf("Enter any year b/w (2001, 2100).\n");
    scanf("%d", &year);
    noy = year - 2001;
    nod = (noy / 4) * 366 + (noy - (noy / 4)) * 365;
    rem = nod % 7;
    if (rem == 0)
        printf("1st January of this year is Monday.\n");
    if (rem == 1)
        printf("1st January of this year is Tuesday.\n");
    if (rem == 2)
        printf("1st January of this year is Wednesday.\n");
    if (rem == 3)
        printf("1st January of this year is Thursday.\n");
    if (rem == 4)
        printf("1st January of this year is Friday.\n");
    if (rem == 5)
        printf("1st January of this year is Saturday.\n");
    if (rem == 6)
        printf("1st January of this year is Sunday.\n");
    return 0;
}
*/
