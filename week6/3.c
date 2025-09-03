#include <stdio.h>

int main() {
  int number; // variable to store the entered number
  int sum = 0; // variable to store the sum of the digits

  printf("Enter a number (1-16): "); // prompt for input
  scanf("%d", &number); // read in the number from stdin

  // calculate the sum of the digits
  while (number > 0) {
    sum += number % 10; // add the unit's place value to the sum
    number /= 10; // divide the number by 10 to get the next digit
  }

  printf("The sum of the digits in the number is: %d\n", sum); // prin

  return 0;
}
