
// Q1)Print all ASCII values and their equivalent characters using while loop.
/*
#include <stdio.h>
int main(void)
{
    int i = 0;
    while (i < 256)
    {
        printf("The character associated with ASCII value %d is %c\n", i, i);
        i++;
    }
}
*/
// Q2)Print all Armstrong numbers b/w 1 & 500.
// Armstrong Number: If the sum of cube of each digit is equal to the number itself. Ex. 153 = (1*1*1) +(5*5*5) +(3*3*3)
/*
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int num = 1, cond;
    while (num <= 500)
    {
        cond = pow(num / 100, 3) + pow((num % 100) / 10, 3) + pow(num % 10, 3);
        if (num == cond)
            printf("%d is a Armstrong number.\n", num);
        num++;
    }
    return 0;
}
*/
//----------------------------------MATCHSTICK GAME--------------------------------------//
/*
Q3)Code a matchstick game b/w user and computer. Computer should always win. Rules are:
- There are 21 matchsticks
- The computer asks the player to pick 1,2,3,4 matchstick(s).
- After user picks up, computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.
*/
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int total = 21, user, sum = 0;
    printf("Welcome to matchstick game.\n Rules of this game are: \n - There are 21 matchsticks \n - The computer will ask you to pick 1,2,3 or 4 matchstick(s). \n - After you pick up yours, computer does its picking.\n- Whoever is forced to pick up the last matchstick loses the game.\n Best of luck, press (Enter) to continue.\n");
    getchar();
    while (sum < 21)
    {
        printf("Choose 1,2,3 or 4 matchsticks.\n");
        scanf("%d", &user);
        fflush(stdin);
        sum += user;
        if (21 - sum == 0)
        {
            printf("YOU LOST :(\n");
            printf("Click (Enter) to continue.\n");
            getchar();
        }
        else
        {
            if (21 - sum == 5)
                sum += 4;
            else if (21 - sum == 4)
                sum += 3;
            else if (21 - sum == 3)
                sum += 2;
            else if (21 - sum == 2)
                sum += 1;
            else
                sum += 1;
            printf("I have choosed my matchsticks .\n");
            printf("Remaining number of matchstick(s) is %d\n", 21 - sum);
        }
    }
    return 0;
}
*/
// Q4) Write a program to enter numbers till the user want. At the end it should display the count of positive, negative and zeros entered.
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int pos = 0, neg = 0, zero = 0, temp, cond = 1;
    while (cond)
    {
        printf("Enter any number :\n");
        scanf("%d", &temp);
        fflush(stdin);
        if (temp > 0)
            pos++;
        else if (temp < 0)
            neg++;
        else
            zero++;
        printf("If you to enter another number press 1 , else press 0.\n");
        scanf("%d", &cond);
    }
    printf("Number of :- \n Positive number entered : %d \n Negative numbers entered : %d \n Zeros entered : %d", pos, neg, zero);
    return 0;
}
*/
// Q5) Write a program to find octal equivalent of any integer input.
// To find octal equivalent : divide integer continuously by 8 till dividend doesn't becomes zero, then write the remainders obtained in reverse direction.
/*
#include <stdio.h>
int main()
{
    int input, multiplier = 1, result = 0;
    printf("Enter any integer.\n");
    scanf("%d", &input);
    while (input)
    {
        result += multiplier * (input % 8);
        input /= 8;
        multiplier *= 10;
    }
    printf("Octal equivalent of your integer is %d\n", result);
    return 0;
}*/
// Q6)Write a program to find range of a set of numbers entered. Range is difference b/w the biggest and smallest number in the list.
/*
#include <stdio.h>

int main()
{
    int n, num, big, flag = 0, small, range;
    printf("How many number are there in set?\n");
    scanf("%d", &n);

    while (n)
    {
        printf("Enter number : \n");
        scanf("%d", &num);
        if (flag == 0)
        {
            big = small = num;
            flag = 1;
        }
        else
        {
            if (num > big)
            {
                big = num;
            }
            else if (num < small)
            {
                small = num;
            }
        }
        n--;
    }
    range = big - small;
    printf("Range of entered set is %d", range);
    return 0;
}
*/