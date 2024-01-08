#include<stdio.h>

int main(){
	//Integer variable to store numbers from user
	int num;
	
	//User input is prompted
	printf("Enter a number:");

	//Gets the inputed number by the user and saves it
	scanf("%d", &num);

	/* Checks inputed number whether 
	 * its divisible by 3 which is fizz,
	 * its divisibke by 5 which is buzz,
	 * or divisible by both 3 and 5 which is fizzbuzz*/
	if ( num%3 == 0 && num%5 == 0)
		printf("Yay! It's a fizzbuzz");
	else if (num%3 == 0)
		printf("It's a fizz");
	else if ( num%5 == 0)
		printf("It's a buzz");
	else
		printf("This number is neither divisible by 3 or 5 or both");
	return 0;
}
