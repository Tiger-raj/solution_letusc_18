// EXERCISE QUESTIONS
// Q1) Input three sides of a triangle and check whether it's Isosceles , Equilateral, Scalene, right angled.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float s1, s2, s3;
    printf("Enter three sides of a triangle.\n");
    scanf("%f%f%f", &s1, &s2, &s3);
    if (s1 == s2 == s3)
        printf("Triangle is equilateral.\n");
    else if ((s1 == s2 && s1 != s3) || (s1 == s3 && s1 != s2) || (s3 == s2 && s1 != s3))
        printf("Triangle is Isosceles.\n");
    else if (s1 != s2 && s1 != s3 && s2 != s3)
        printf("Triangle is Scalene.\n");

    if ((s1 * s1 + s2 * s2 == s3 * s3) || (s1 * s1 + s3 * s3 == s2 * s2) || (s3 * s3 + s2 * s2 == s1 * s1))
        printf("Triangle is Right Angled.\n");
    return 0;
}
*/

// Q2) Convert RGB colors to CMYK using formulaes given in book.
/*
#include <stdio.h>
#include <math.h>
int main()
{
    int R, G, B;
    float cyan, magenta, yellow, black, white;
    printf("Enter value of Red, Green and Blue respectively b/w [0,255].\n");
    scanf("%d%d%d", &R, &G, &B);
    if (R == 0 && B == 0 && G == 0)
    {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else
    {
        white = (R / 255.0 > G / 255.0 ? (R / 255.0 > B / 255.0 ? R / 255.0 : B / 255.0) : (G / 255.0 > B / 255.0 ? G / 255.0 : B / 255.0));
        cyan = 1 - R / (255.0 * white);
        magenta = 1 - G / (255.0 * white);
        yellow = 1 - B / (255.0 * white);
        black = 1 - white;
    }
    printf("Your color in CMYK is -> C : %f, M : %f, Y : %f, K : %f.\n", cyan, magenta, yellow, black);
    return 0;
}
*/
/*
Q3) Steel is graded according to following conditions :-
  (i)Hardness should be greater than 50
  (ii)Carbon content must be less than 0.7
  (iii)Tensile strength must be greater than 5600
Grades are :-
10 if all three cond. are met
9 if cond. (i) & (ii) are met
8 if cond. (ii) & (iii) are met
7 if cond. (i) & (iii) are met
6 if only one cond. is met
5 if no cond. is met
Input conditions and output grade of steel.
*/
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hard, tenStr, cond1, cond2, cond3;
    float carbCont;
    printf("Enter values of Hardness, Carbon content and Tensile Strength respectively.\n");
    scanf("%d%f%d", &hard, &carbCont, &tenStr);
    cond1 = hard > 50;
    cond2 = carbCont < 0.7;
    cond3 = tenStr > 5600;
    if (cond1 && cond2 && cond3)
        printf("Grade of steel is 10\n");
    else if (cond1 && cond2)
        printf("Grade of steel is 9\n");
    else if (cond3 && cond2)
        printf("Grade of steel is 8\n");
    else if (cond1 && cond3)
        printf("Grade of steel is 7\n");
    else if ((cond1 && !cond2 && !cond3) || (cond2 && !cond1 && !cond3) || (cond3 && !cond2 && !cond1))
        printf("Grade of steel is 6\n");
    else if (!cond1 && !cond2 && !cond3)
        printf("Grade of steel is 5\n");
    return 0;
}
*/
// Q4) Calculate BMI using BMI = weight (kg)/ height * height (m) and report category of BMI according to table given in book.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float height, weight, bmi;
    printf("Enter your height(in m) and weight(in kg).\n");
    scanf("%f%f", &height, &weight);
    bmi = weight / (height * height);
    printf("Your bmi is : %f\n", bmi);
    if (bmi < 15)
        printf("Your bmi category is Starvation.\n");
    if (bmi > 15.1 && bmi < 17.5)
        printf("Your bmi category is Anorexic.\n");
    if (bmi > 17.6 && bmi < 18.5)
        printf("Your bmi category is Underweight.\n");
    if (bmi > 18.6 && bmi < 24.9)
        printf("Your bmi category is Ideal.\n");
    if (bmi > 25 && bmi < 29.9)
        printf("Your bmi category is Overweight.\n");
    if (bmi > 30 && bmi < 39.9)
        printf("Your bmi category is Obese.\n");
    if (bmi >= 40)
        printf("Your bmi category is Morbidly Obese.\n");
    return 0;
}
*/
/*
Q5) Using conditional operators determine :
    (i)Whether the input character is lower case alphabet or not.
    (ii)Whether the input character is special symbol or not.
*/
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     char a;
//     printf("Enter any character.\n");
//     scanf("%c", &a);

//     //              PART (i)

//     a > 97 && a < 122 ? printf("Entered character is lower case alphabet.\n") : printf("Entered character is not a lower case alphabet.\n");

//     //              PART (ii)

//     (a > 33 && a < 47) || (a > 58 && a < 64) || (a > 123 && a < 126) ? printf("Entered character is a special character.\n") : printf("Entered character is not a special character.\n");
//     return 0;
// }

// Q6)Take value of angle in degree and check whether sum of squares of sine and cosine of this angle is 1.
/*
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int angDeg;
    float angRad, result;
    printf("Enter angle in degree.\n");
    scanf("%d", &angDeg);
    angRad = (22 * angDeg) / (180 * 7.0);
    result = pow(sin(angRad), 2) + pow(cos(angRad), 2);
    result == 1 ? printf("Sum is 1.\n") : printf("Sum is not 1.\n");
    return 0;
}
*/
