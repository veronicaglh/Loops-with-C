/*This program will contain different exercises that have been done with C*/
/*The program solves the exercises taken from the book C Programming: A modern approach book,*/
/*Questions are taken from Chapter 6 - Programming Projects (questions 1,2,3 and 11)*/
/*To compile this program in Ubuntu or other Linux Distributions you run the command: gcc -o ExerciseOne ExerciseOne.c */
/*Make sure you are in the correct folder path before doing so*/
/*To run the program you can use the command: ./ExerciseOne */

/*The first exercise will prompt the user to enter numbers one by one.*/
/*When the user enters 0 or a negative number the program will display the largest number entered */
/*and display the greatest as well as smallest integer*/

#include<stdio.h>
int main(){

    /*Two variables have been declared here.*/
    /*The num variable will be used to store the greatest number the user inputs*/
    /*intialValue will be used to store the number the user inputs(not necessarily the largest number but whatever the user inputs)*/

    int num = 0;
    int intialValue;

    /*This for loop will only be displayed when the user inputs a number besides 0 or negative value*/
    /*As soon as we run the program this loop will be displayed and thats because intialValue has a value different from 0*/
    /*The loop recieves a number from user(intialValue) and comapres it with num(0). If the value the user inputs is greater than num. It stores the greater value in num*/
    
    for (int i = 0; intialValue > 0; i++){ 
        printf("Please enter the number: ");
        scanf("%d", &intialValue);
        num = num>intialValue ? num:intialValue;
        }

    
    /*This is only dispalyed when the user enters a number thats less than or equal to zero*/
    /*num contains the greatest number.*/
    
    printf("The greatest number is: %d.\n",num);
    
     return 0;
}   