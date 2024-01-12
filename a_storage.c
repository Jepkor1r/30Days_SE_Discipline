#include <stdio.h>

int main() {

  for (int i = 0; i < 5; ++i) {
     printf("C programming");
  }


  printf("%d", i);// Error: i is not declared at this point
  return 0;
}

void func() {
   int n2;  // n2 is a local variable to func()
  }
