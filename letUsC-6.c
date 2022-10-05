// Print all prime numbers b/w 1 and 300.

/*
#include <stdio.h>

int main()
{
	int i,j;
	i =2;
	while (i<301) {
		j = 2;
		while (j <= i-1)
		{
			if(i%j == 0){
				break;
			}
			j++;
		}
		if(i == j){
				printf("%d is a prime. \n",i);
		}
		i++;
	}
	return 0;
}
*/

// Write a program to add seven terms of sequence
//  1/1! + 2/2! + ...
/*
#include <stdio.h>
int main () {
	int i;
	float sum =0, fact=1.0;
	for(i = 1 ; i < 8; i++){
		fact *= i;
		sum += i/fact ;
	}
	printf("Sum is %f\n", sum);
	return 0;
	}
*/

// Write a program to print all combination of 1,2,3
/*
#include <stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<4;i++){
		for(j=1;j<4;j++){
			for(k=1;k<4;k++){
				printf("%d %d %d\n", i,j,k);
			}
		}
	}
	return 0;
}
*/

//			BACK EXERCISE

// Q1)Write a program to print mtiplication table of number entered by user. Example : 29*1 = 29

/*
#include <stdio.h>
int main(){
	int input,i=1;
	printf("Enter any number to get it's table\n");
	scanf("%d",&input);
	while(i<11){
		printf("%d*%d = %d\n", input,i, input*i);
		i++;
	}
	return 0;
}
*/

// Q2)Write a program to print a table of values of i when y varies from 1 to 6 and for each y, x varies from 5.5 to 12.5 in steps of 0.5, according to the formula i = 2 + (y+0.5*x)
/*
#include <stdio.h>
int main (){
	int y;
	float i,x;
	for(y = 1; y <7; y++){
		for(x = 5.5; x <= 12.5; x += 0.5){
			i = 2 + ( y + 0.5 * x );
			printf("y : %d, x : %f, i : %f\n", y,x,i);
		}
	}
	return 0;
}
*/

// Q3) Skipped cuz it was way too easy.

// Q4) Write a program to calculate sum of first seven terms of series of natural logarithm i.e (x-1)/x + 1/2*((x-1)/x-)^2 + 1/2*((x-1)/x)^3 + .....
/*
#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float val, x, sum;
	printf("Enter the value of x : \n");
	scanf("%f", &x);
	val = (x - 1) / x;
	sum = val;
	i = 2;
	while (i < 7)
	{
		sum += (1.0 / 2) * pow(val, i);
		i++;
	}
	printf("Sum of seven terms is %f\n", sum);
	return 0;
}
*/

// Q5)Write a program to generate all pythagorean triplets with side length less than or equal to 30.
/*
#include <stdio.h>

int main()
{
	int a, b, c;
	for (a = 1; a < 31; a++)
	{
		for (b = 1; b < 31; b++)
		{
			for (c = 1; c < 31; c++)
			{
				if (a * a + b * b == c * c)
				{
					printf("%d, %d, %d is a triplet.\n", a, b, c);
				}
			}
		}
	}

	return 0;
}
*/
// Q6) Population of a town increased by 10% each year to become 100000 at the end of 10 years. Write a program to print population at the end of each year.
/*
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 1, j;
	float pop;
	while (i < 11)
	{
		pop = 100000 / pow(1.1, i);
		printf("Population %d years ago : %f\n", i, pop);
		i++;
	}
}
*/

// Q7)Print all Ramanujun's numbers  to a reasonable limit. Ramanujan's number is a number which can be expressed as sum of two cubes in two different ways. Smallest number is 1729.
#include <stdio.h>

int main()
{
	int i, j, k, l;
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 30; j++)
		{
			for (k = 0; k < 30; k++)
			{
				for (l = 0; l < 30; l++)
				{
					if (i != j && i != k && i != l && j != k && j != l && k != l)
					{
						if (i * i * i + j * j * j == k * k * k + l * l * l)
						{
							printf("%d\n", i * i * i + j * j * j);
						}
					}
				}
			}
		}
	}

	return 0;
}