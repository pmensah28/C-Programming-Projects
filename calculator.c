#include <stdio.h>
/*
This is a simple program for calculating numbers.
It will prompt the user to enter 2 number followed by an
operation they wish to perform. It will help perform basic operations
like addtion, subtraction, multiplication and addition.
*/

int main(){
    double num1, num2;
    char operator;

    printf("Enter your first number: \n");
    scanf(" %lf", &num1);
    
    printf("Enter your prefered operaor ==> (+, -, *, /) \n");
    scanf(" %c", &operator);
    
    printf("Enter your second number: \n");
    scanf(" %lf", &num2);

    switch (operator)
    {
    case '+' : 
        printf("%.4lf + %.4lf = %.4lf", num1, num2, num1 + num2);
        break;

    case '-' : 
        printf("%.4lf - %.4lf = %.4lf", num1, num2, num1-num2);
        break;
    
     case '*' : 
        printf("%.4lf * %.4lf = %.4lf", num1, num2, num1 * num2);
        break;   

    case '/' : 
        if (num2 != 0)
            printf("%.4lf / %.4lf = %.4lf", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero! \n");
        break;

    default: printf("Invalid Operation! Try again. \n");
        break;
    }

    return 0;
}