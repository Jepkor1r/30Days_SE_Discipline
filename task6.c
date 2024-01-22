#include<stdio.h>

void  greet(){
	//local variable greeting is created
	char greeting[] = "Hello!";
	printf("%s\n", greeting);
	// Here, greeting variable is exited
	// therefore, it is automatically destroyed
}

int main() {
	printf("What is your name: ");

	//local variable name
	//Note: auto specifier is not a must to write
	
	auto char name[50];

	scanf("%s", name);

	//function greet is called 
	greet();

	printf("Nice to meet you, %s.\n", name);

	return 0;
}
