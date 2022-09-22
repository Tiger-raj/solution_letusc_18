/*       IN BETWEEN CHAPTER-1 EXAMPLES

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    char b;
    float c;
    a = 4;
    b = 'r';
    c = 5.32;
    printf("here is a combination of int %d , char %c , float %f", a, b, c);
    return 0;
}


#include <stdio.h>
int main()
{
    int p, n;
    float r, si;
    printf("Enter values of principle, no. of year, rate\n");
    scanf("%d %d %f", &p, &n, &r);
    si = p * n * r / 100;
    printf("simple intrest is : %f", si);
    return 0;
}
*/

// JUST TESTING SOMETHING

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("hey there this is Tiger\n");
//     int a;
//     scanf("%d", &a);
//     printf("hey there this is Raj");

//     return 0;
//

//     SOLVED PROBLEMS
//       Problem 1.1
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float bp, da, hra, grpay;
    printf("Enter your basic pay\n");
    scanf("%f", &bp);
    da = 0.4 * bp;
    hra = 0.2 * bp;
    grpay = bp + da + hra;
    printf("Your basic pay is %f\n", bp);
    printf("Your dearness allowance is %f\n", da);
    printf("Your house rent allowance is %f\n", hra);
    printf("Your gross pay is %f", grpay);
    return 0;
}
*/

//   PROBLEM 1.2
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float disKm, disM, disF, disI, disC;
    printf("Enter distance between two cities (in km)\n");
    scanf("%f", &disKm);
    disM = disKm * 1000;
    disF = disM * 3.28084;
    disI = disM * 39.37;
    disC = disM * 100;
    printf("Distance is %f Kilometer \n", disKm);
    printf("Distance is %f  Meter\n", disM);
    printf("Distance is %f Feet \n", disF);
    printf("Distance is %f Inches \n", disI);
    printf("Distance is %f Centimeter ", disC);

    return 0;
}
*/

// EXERCISE PROBELM-1
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float far, centi;
    printf("Enter the temperature in fahrenheit\n");
    scanf("%f", &far);
    float num = 5.0 / 9.0;
    centi = num * (far - 32);
    printf("The temperature in fahrenheit is %f\n", far);
    printf("The temperature in centigrade is %f", centi);

    return 0;
}
*/

// TESTING CODE
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     float num = 5.0 / 9.0;
//     printf("num is %f", num);
//     return 0;
// }

// EXERCISE PROBELM-2
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     float len, br, rad, ArRec, PerRec, ArCir, CirCir;
//     float PI = 22.0 / 7.0;
//     // printf("%f\n", PI);
//     printf("Enter length, breadth of a rectangle and radius of a circle \n");
//     scanf("%f%f%f", &len, &br, &rad);
//     ArRec = len * br;
//     PerRec = 2 * (len + br);
//     ArCir = PI * rad * rad;
//     CirCir = PI * 2 * rad;
//     printf("Area of rectangle is %f \n", ArRec);
//     printf("Perimeter of rectangle is %f \n", PerRec);
//     printf("Area of circle is %f \n", ArCir);
//     printf("Circumference of circle is %f \n", CirCir);
//     return 0;
// }
