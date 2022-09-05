/*The third exercise will prompt the user to enter a fraction*/
/*It will then display the fraction in the lowest or simplest terms*/


#include <stdio.h>

int main(void)
{
    int numerat;
    int denominat;
    int a;
    int b;
    int remainder;
  

    printf("Enter a fraction. Eg:20/100:  ");
    scanf("%d/%d", &numerat, &denominat);

    a = numerat;
    b = denominat;

    /*We can use this while loop to compute GCD */
    while (a != 0 && b!=0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("GCD = %d\n", a);

    /* reduce fraction to lowest terms */
    numerat /= a;
    denominat /= a;

    printf("In lowest terms: %d/%d\n\n", numerat, denominat);

    return 0;
}