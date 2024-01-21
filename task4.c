#include<stdio.h>

int main (){
	// i is a global variable
	int i = 100;

	for(int a=0;a<=10;a++){
		//a is a Local variable
		//output: 0 1 2 3 4 5 6 7 8 9 10
		int sum =+ a;
		printf("%d\n", sum);
		

		//still prints i
		//because: 
		//global variable is accessible all throughout the program
		//its lifetime is external
		//prints 100
		//but the output looks like this: 0 100 1 100 2 100 3 100 4 100 ...
		//why do you think so¿
		printf("%d\n",i);

	}
       
	// 0utputs 100
	printf("%d\n", i);

        //prints an error! undeclared identifier
	//Why:
	//It has been declared outside the function
	//It is created and destroyed within the for loop block
	//NOTE:kindly comment this line of code(printf)), for program to output a and i
	printf("%d\n",a);
	
	return 0;
}
