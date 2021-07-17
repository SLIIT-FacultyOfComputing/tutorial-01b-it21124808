/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

//function main begins with program execution
int main() {

      int n; //declaring variable
      int i; //declaring variable
      int sum = 0; //declaring variable

      printf("Input a value for the n: "); //prompt
      scanf("%d", &n); //read

        for(i=1; i<=n; i++)
        {
          
             sum += i; //increment

        } //end of the for loop

      printf("Sum: %d", sum); //display
      
        return 0;

} //end of the main function

