/*The second exercise will prompt the user to enter two numbers.*/
/*It will then display the GCD of these two numbers*/

#include<stdio.h>

int main(){
    int firstNum;
    int secondNum;
    int gcd;

    printf("This program will ask you to enter two numbers and then display the GCD of the two numbers.\n");
    printf("Enter the first number: ");
    scanf("%d",&firstNum);
    printf("Enter the second number: ");
    scanf("%d",&secondNum);

    for (int i = 1; i<=firstNum && i<=secondNum; i++){
        if (firstNum%i ==0 && secondNum%i == 0){
            gcd = i; 
        }
    }

    printf("The GCD is %d \n",gcd);

    return 0;
}
