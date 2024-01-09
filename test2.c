#include<stdio.h>

int main() {
	
	//Declaring integer i
	int i = 0;

	/* Checking whether i meets the condition
	   If it meets the condition, i is incremented by the value 2
	   A loop is created untill i < 10, where it exits
	   The output will be: 2 4 6 8 10
	 */

	while(i<10){
		i+=2;
		printf("%d ",i);
	}
	return 0;
}

