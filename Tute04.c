/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int x, int y); //function declaration
int maximum(int x, int y); //function declaration
int multiply(int x, int y); //function declaration
//function main begins with program execution
int main() {

   int no1, no2; //declaring variables

   printf("Enter a value for no 1 : "); //prompt
   scanf("%d", &no1); //read

   printf("Enter a value for no 2 : "); //prompt
   scanf("%d", &no2); //read

   printf("%d ", minimum(no1, no2)); //function calling
   printf("%d ", maximum(no1, no2)); //function calling
   printf("%d ", multiply(no1, no2)); //function calling

      return 0;

} //end of the main function
int minimum(int x, int y) //function implementation
{

       if(x < y) //condition checking
  
          return x;

} //end of the function
int maximum(int x, int y) //function implementation
{

       if(y > x) //condition checking

           return y;

} //end of the function
int multiply(int x, int y) //function implementation
{
   
          return x * y;

} //end of the function