#include<stdio.h>

int main(){

	//Declaring variable i
	int i = 0;

	//Labelled statement to be used by goto statement
        start_loop:

	/*If statement- to check whether i is less or greater than 10
	  if i is less than 10, its incremented by 2
	  i is printed out then
	  goto statement jumps back to the labelled statement
	  a loop is created untill i > 10, where it exits
	  the output will be: 2 4 6 8 10
	 */

	if(i < 10){
		i+=2;
		printf("%d ", i);
		goto start_loop;
	}
	return 0;
}
