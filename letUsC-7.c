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