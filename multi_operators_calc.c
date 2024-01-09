#include<stdio.h>

// This is a simple program that calculates 2 numbers

int main(){
    double num;
    double total = 0;
    char oper;
    char quit = 'n';

    printf("Enter a number: ");
    scanf(" %lf", &total);
    do{
        printf("\nEnter your prefered operator (+, -, *, /) or press q to quit: ");
        scanf(" %c", &oper);

        printf("\nEnter your next number to perfom calculation: ");
        scanf(" %lf", &num);

        //printf("Enter your second number: ");
        //scanf(" %lf", &num2);
        if(oper=='+'){
            printf("%.4lf + %.4lf = %.4lf \n", total, num, total+num);
            total += num;
        }else if (oper=='-')
        {
            printf("%.4lf - %.4lf = %.4lf \n", total, num, total-num);
            total -= num;
        }else if (oper=='*')
        {
            printf("%.4lf * %.4lf = %.4lf \n", total, num, total*num);
            total *= num;
        }else if (oper=='/')
        {
            if (num!=0)
            {
                printf("%.4lf / %.4lf = %.4lf \n", total, num, total/num);
                total /= num;
            }else{
                printf("\nDivision by zero is not allowed");
            }
            
        }else if (oper=='q')
        {   
            printf("Total: %.4lf \n", total);
            printf("\nDone!\n");
            break;
        }else{
            printf("Invalid operator");
        }
    }while(oper != 'q');

/*
    printf("Enter number to perfom calculation: ");
    scanf(" %lf", &num1);

    printf("Enter your prefered operator (+, -, *, /) : ");
    scanf(" %c", &oper);

    //printf("Enter your second number: ");
    //scanf(" %lf", &num2);
    do{    
        switch (oper)
        {
        case '+':
            printf("%.4lf + %.4lf = %.4lf \n", num1, total, num1+total);
            total=total+num1;
            break;

        case '-':
            printf("%.4lf - %.4lf = %.4lf \n", num1, num2, num1-num2);
            break;

        case '*':
            printf("%.4lf * %.4lf = %.4lf \n", num1, num2, num1*num2);
            break;

        case '/':
            if(num2 != 0)
                printf("%.4lf / %.4lf = %.4lf \n", num1, num2, num1/num2);
            else
                printf("Division by zero is not allowed \n");
            break;
        
        default: 
            printf("You entered an invalid operator \n");
            break;
        }
    }while (total != 0);

    printf("total: %.2lf", total);

    */
    
    return 0;
}