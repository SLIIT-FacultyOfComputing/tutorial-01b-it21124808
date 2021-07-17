/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main begins with program execution
int main() {
  
         int mark1; //declaring variable 
         int mark2; //declaring variable
         float total = 0; //declaring variable
         float average; //declaring variable

         printf("Enter the Mark 1: "); //prompt
         scanf("%d", &mark1); //read

         printf("Enter the Mark 2: "); //prompt
         scanf("%d", &mark2); //read

            total = mark1 + mark2; //adding two marks
            average = total / 2; //Calculation

         printf("Average: %.2f", average); //display

         
         return 0;

} //end of the main function

