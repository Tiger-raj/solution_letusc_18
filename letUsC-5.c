
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
        sum += user;
        if (21 - sum == 0)
        {
            printf("YOU LOST :(\n");
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