// Code a menu driven program have following actions in its menu : 1. Factorial of a number 2. Prime or not 3. Odd or even 4. It should ask user to choose menu and after running that, it should again show menu untill user chooses exit option.
/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, num, choice, fact, j = 1;
    while (j)
    {
        printf("Menu of actions : \n 1. Factorial of a number. \n 2. Prime or not. \n 3. Odd or even. \n 4. Exit.\n Your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number to calculate its factorial.\n");
            scanf("%d", &num);
            fact = 1;
            for (i = 2; i <= num; i++)
                fact *= i;
            printf("Factorial of %d is %d.\n", num, fact);
            break;
        case 2:
            printf("Enter number to check whether it's prime or not :\n");
            scanf("%d", &num);
            fact = 1;
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("Not a Prime.\n");
                    fact = 0;
                    break;
                }
            }
            if (num == 1)
                printf("Neither Prime nor Composite.\n");
            else if (fact)
                printf("Prime.\n");
            break;
        case 3:
            printf("Enter number to check whether it's even or odd :\n");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("Even\n");
            }
            else
            {
                printf("Odd\n");
            }
            break;
        case 4:
            exit(1);
        default:
            printf("Enter only 1,2,3 or 4. \n");
        }
        printf("Press any key to continue :\n");
        getch();
    }

    return 0;
}
*/
// Write a program to find out grace marks obtained by the student according to the conditions given in book using switch statements.
/*
#include <stdio.h>

int main()
{
    int class, nsf;
    printf("Enter the class obtained by you in integer format like first class as 1 and so on.\n");
    scanf("%d", &class);
    printf("Enter the no. of subjects you failed.\n");
    scanf("%d", &nsf);
    switch (class)
    {
    case 1:
        if (nsf < 4)
        {
            printf("You got %d grace marks.\n", 5 * nsf);
        }
        else
        {
            printf("No grace awarded!\n");
        }
        break;
    case 2:
        if (nsf < 3)
        {
            printf("You got %d grace marks.\n", 4 * nsf);
        }
        else
        {
            printf("No grace awarded!\n");
        }
        break;
    case 3:
        if (nsf < 2)
        {
            printf("You got 5 grace marks.\n");
        }
        else
        {
            printf("No grace awarded!\n");
        }
        break;
    default:
        printf("Wrong class inputed !!");
        break;
    }
    return 0;
}
*/