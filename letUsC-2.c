//     TESTINGS

// additon on character adds decimal value associated with those characters and if character is taken as an output then character/symbol associated with that decimal number is printed as output.

// #include <stdio.h>
// int main(void)
// {
//     char a = 'a', b = 'b';
//     printf("%d", a + b);

//     return 0;
// }

//          REVERSE A FIVE DIGIT NUMBER
/*
#include <stdio.h>

int main(void)
{

    int num;
    printf("Enter any 5 digit number whom you want to get reversed \n");
    scanf("%d", &num);
    int n1, n2, n3, n4, n5;
    n1 = num / 10000;
    n2 = num / 1000 - n1 * 10;
    n3 = num / 100 - ((n1 * 100) + n2 * 10);
    n4 = num / 10 - (n1 * 1000 + n2 * 100 + n3 * 10);
    n5 = num - (n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10);
    printf("Your reversed number is %d", n5 * 10000 + n4 * 1000 + n3 * 100 + n2 * 10 + n1);

    return 0;
}
*/

/*          TESTINGS
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // printf("%d\n", sizeof(int));
    int power = pow(2.0, 15.0) - 1;
    printf("The maximum no. that can be stored in an signed integer variable is : %d", power);
    return 0;
}
*/

// given notes of Rs 1, 2,5,10,50,100
// write program to compute smallest no. of notes that will combine to give input Rs. N
/*
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int input, N100, N50, cond, cond2, cond3, N10, N5, N2, N1;
    printf("Enter amount of money(integer value only) whose notes breakdown in terms of 100 Rs, 50 Rs, 10 Rs, 5 Rs, 2 Rs, 1 Rs notes you wish to see.\n");
    scanf("%d", &input);
    N100 = input / 100;
    cond = input - N100 * 100;
    N50 = cond / 50;
    cond2 = cond - 50 * N50;
    N10 = cond2 / 10;
    cond3 = cond2 - N10 * 10;
    N5 = cond3 / 5;
    N2 = (cond3 - N5 * 5) / 2;
    N1 = cond3 - N5 * 5 - N2 * 2;
    printf("No. of 100 Rs notes : %d, 50 Rs notes : %d, 10 Rs notes : %d, 5 Rs notes : %d, 2 Rs notes : %d, 1 Rs notes : %d\n", N100, N50, N10, N5, N2, N1);
    getch();

    return 0;
}
*/
/*
#include <stdio.h>
// #include <windows.h>

int main(int argc, char const *argv[])
{
    // system("cls");
    // short int ran;
    // printf("%d", sizeof(ran));
    // char a = 257;
    unsigned char b = -129;
    // printf("%d\n", b);
    printf("%c", b);
    return 0;
}
*/

//          EFFECT OF ADDING WHITESPACE BEFORE AND AFTER FORMAT SPECIFIER IN C
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter values of a and b\n");
    // scanf(" %d", &a); //space before %d is ignored in this case
    scanf("%d ", &b); // space after %d causes console to look for one extra non whitespace character after desired character to execute next line of code.
    printf("a is : %d, b is : %d", a, b);
    return 0;
}
*/
//             BACK EXERCISE
// Q1) Calculate the sum of digits of a five-digit number
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input, a, b, c, d, e;
    printf("Enter any five digit number to get sum of its digits.\n");
    scanf("%d", &input);
    a = input % 10;
    input = input / 10;
    b = input % 10;
    input = input / 10;
    c = input % 10;
    input = input / 10;
    d = input % 10;
    input = input / 10;
    e = input % 10;
    input = input / 10;
    printf("sum of digits of your entered number is : %d", a + b + c + d + e);
    return 0;
}
*/
// Q2) Convert Cartesian coordinates(x,y) into polar coordinates(r,phi) ; r = sqrt(x*x + y*y) and phi = tan^-1(y/x)

/*
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int x, y;
    float r, phi;
    printf("Enter Cartesian coordinates(x y) :\n");
    scanf("%d%d", &x, &y);
    r = sqrt(x * x + y * y);
    phi = atan(y / x);
    printf("Coordinates in polar form are (%f,%f)\n", r, phi);
    return 0;
}
*/
// Q3) Take input values of latitude (L1,L2) and longitude (G1,G2) in degrees and output distances (D) in nautical miles b/w them using formula : D = 3963*acos(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G2-G1))

// #include <stdio.h>
// #include <math.h>

// int main(int argc, char const *argv[])
// {
//     float L1, L2, G1, G2, D;
//     printf("Enter values of latitude (L1,L2) and longitude (G1,G2) in degrees in correct order as indicated and without brackets and each value separated by a space or enter\n");
//     scanf("%f%f%f%f", &L1, &L2, &G1, &G2);
//     D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
//     printf("Distances (D) in nautical miles b/w them is : %f\n", D);
//     return 0;
// }

// Q4)Take temperature and wind velocity as input and calculate wind-chill factor using formula wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16) . wcf is felt air temperature on exposed skin due to wind.
/*
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float t, v, wcf;
    printf("Enter values of temperature and velocity respectively\n");
    scanf("%f%f", &t, &v);
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("The value of wind-chill factor is : %f", wcf);
    return 0;
}
*/
// Q5)Take angle as input and print all trigonometric ratios

// #include <stdio.h>
// #include <math.h>

// int main(int argc, char const *argv[])
// {
//     float ang, sine, cosine, tangent, cotangent, secant, cosecant;
//     printf("Enter value of angle in radian\n");
//     scanf("%f", &ang);
//     ang = 22.0 / (7 * 180) * ang;
//     sine = sin(ang);
//     cosine = cos(ang);
//     tangent = tan(ang);
//     cotangent = 1 / tan(ang);
//     secant = 1 / cos(ang);
//     cosecant = 1 / sin(ang);
//     printf("The values of trigonometric ratios is -> sine : %f, cosine : %f, tangent : %f, cotangent : %f, secant : %f, cosecant : %f\n", sine, cosine, tangent, cotangent, secant, cosecant);

//     return 0;
// }

// Q6) Take two inputs in C and D then interchange their values

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int c, d, temp;
//     printf("Enter value of c and d respectively\n");
//     scanf("%d%d", &c, &d);
//     temp = c;
//     c = d;
//     d = temp;
//     printf("The value of c is : %d and d is : %d \n", c, d);

//     return 0;
// }
