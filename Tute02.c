/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

//function main begins with program execution
int main() {

     int distance; //declaring variable
     float amount; //declaring variable

     printf("Enter the distance: "); //prompt
     scanf("%d", &distance); //read

        if(distance <= 30) //condition checking
        {

             amount = distance * 50; //calculation

        }

        if(distance > 30) //condition checking
        {

            amount = 30 * 50 + (distance - 30) * 40; //calculation

        }

      printf("Amount to be paid: %.2f", amount); //display

  
          return 0;

} //end of the main function
