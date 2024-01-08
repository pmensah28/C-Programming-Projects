#include <stdio.h>
/*
This is a simple program for calculating numbers.
It will prompt the user to enter 2 number followed by an
operation they wish to perform. It will help perform basic operations
like addtion, subtraction, multiplication and division.
*/

int main(){
    double num1, num2;
    char operator;
    char quit;

    do{
        printf("\nEnter your first number: ");
        scanf(" %lf", &num1);
        
        printf("\nEnter your prefered operaor ==> (+, -, *, /): ");
        scanf(" %c", &operator);
        
        printf("\nEnter your second number: ");
        scanf(" %lf", &num2);

        switch (operator)
        {
        case '+' : 
            printf("%.4lf + %.4lf = %.4lf \n", num1, num2, num1 + num2);
            break;

        case '-' : 
            printf("%.4lf - %.4lf = %.4lf \n", num1, num2, num1-num2);
            break;
        
        case '*' : 
            printf("%.4lf * %.4lf = %.4lf \n", num1, num2, num1 * num2);
            break;   

        case '/' : 
            if (num2 != 0)
                printf("%.4lf / %.4lf = %.4lf \n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero! \n");
            break;

        default:
            printf("Invalid Operation! Try again. \n");
            break;
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &quit);

            if(quit == 'y'){
                printf("\nGreat...\n");
            }else
                printf("\nDone!\n");
    
    }while(quit != 'n');
    

    return 0;
}