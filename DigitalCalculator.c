#include<stdio.h>
#include<conio.h>
#define clrscr()
#define getch()
int main()
{
    clrscr();
    float num1;
    float num2;
    float result;
    char operation;
    printf("Enter the first number:\n");
    scanf("%f", &num1);
    printf("Enter the operation:\n");
    scanf(" %c", &operation);
    printf("Enter the second number:\n");
    scanf("%f", &num2);
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        printf("%f", result);
        break;

        case '-':
        result = num1 - num2;
        printf("%f", result);
        break;

        case '*':
        result = num1 * num2;
        printf("%f", result);
        break;

        case '/':
        result = num1 / num2;
        printf("%f", result);
        break;
    
    default:
    printf("The operator is not valid.\n");
        break;
    }
    getch();
}