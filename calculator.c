#include <stdio.h>

int main() {
    char op;
    double x, y;

    /*Prompts the User to choose an arithimetic operand to use*/
    printf("Choose an Operator: (+, -, *, /)\n");
    scanf("%c", &op);

    /*Prompts the User to enter the first Value*/
    printf("Enter the First Value: \n");
    scanf("%lf", &x);

    /*Prompts the User to enter the second value*/
    printf("Enter the Second Value: \n");
    scanf("%lf", &y);
    /*This is to create a blank space for better spacing*/
    printf("\n");

    /*Switch function is an alternative of if-else function that helps
    you to execute mutlitle operations with different values*/
    switch (op) {
    /*This case adds up the values if the user chooses the addition operand*/
    case '+':
        printf("%0.1lf + %0.1lf = %0.1lf", x, y, x+y);
        printf("\n");
        break;

    /*This case subtracts the values if the user chooses the subtraction operand*/
    case '-':
        printf("%0.1lf - %0.1lf = %0.1lf", x, y, x-y);
        /*This is to create a blank space for better spacing*/
        printf("\n");
        break;

    /*This case multiplies the values if the user chooses the multiplication operand*/
    case '*':
        printf("%0.1lf * %0.1lf = %0.1lf", x, y, x*y);
        /*This is to create a blank space for better spacing*/
        printf("\n");
        break;

    /*This case divides up the values if the user chooses the division operand*/
    case '/':
        printf("%0.1lf / %0.1lf = %0.1lf", x, y, x/y);
        /*This is to create a blank space for better spacing*/
        printf("\n");
        break;

    /*This is an error message that displays if the user enters the wrong operand*/
    default:
    printf("ERROR!\nThe operator is incorrect.");
    }
    return 0;
}
