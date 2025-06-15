/*
Author: Enes Elmas
Date: 2022-11-02
Description: This C program performs five different calculations based on the user's selection using a switch-case structure.
The available operations are:
1. Calculating interest income based on principal, interest rate, and duration.
2. Calculating weekly salary based on daily work hours and hourly wage.
3. Calculating the circumference and area of a circle from its diameter.
4. Converting degrees to radians.
5. Calculating the roots of a quadratic equation using the discriminant (delta) method.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice;

    while (1)
    {
        printf("---------------------------------\n");
        printf("1 - Calculate interest income\n");
        printf("2 - Calculate weekly salary\n");
        printf("3 - Calculate circle area and circumference\n");
        printf("4 - Convert degrees to radians\n");
        printf("5 - Calculate roots of a quadratic equation\n");
        printf("6 - Exit\n");
        printf("---------------------------------\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 :
                {
                    int amount, rate, year, annual;

                    printf("Enter the amount of money: ");
                    scanf("%d", &amount);

                    printf("Enter the annual interest rate (%): ");
                    scanf("%d", &rate);

                    printf("How many years of interest will you calculate? : ");
                    scanf("%d", &year);

                    annual = amount * rate / 100;
                    printf("Annual interest income: %d\n", annual);
                    printf("Interest income in %d years: %d\n", year, year * annual);
                    break;
                }

            case 2 :
                {
                    int days;
                    float hourlyWage, total;

                    printf("Assuming you work 8 hours a day.\n");
                    printf("How many days do you work per week? ");
                    scanf("%d", &days);
                    printf("What is your hourly wage? ");
                    scanf("%f", &hourlyWage);

                    total = 8 * hourlyWage * days;
                    printf("Your weekly salary: %.2f\n", total);
                    break;
                }
            case 3 :
                {
                    float area, diameter, circumference, pi = 3.14159;
                    printf("Enter the diameter of the circle: ");
                    scanf("%f", &diameter);

                    circumference = diameter * pi;
                    printf("Circumference: %.2f\n", circumference);
                    area = pi * diameter / 2 * diameter / 2;
                    printf("Area: %.2f\n", area);
                    break;
                }
            case 4 :
                {
                    int degree, radian;
                    printf("Enter the degree: ");
                    scanf("%d", &degree);
                    radian = 180 / degree;
                    printf("Radian: pi/%d\n", radian);
                    break;
                }
            case 5 :
                {
                    int a, b, c, delta;
                    int root1, root2;

                    printf("Enter the coefficient of x^2: ");
                    scanf("%d", &a);
                    printf("Enter the coefficient of x: ");
                    scanf("%d", &b);
                    printf("Enter the constant term: ");
                    scanf("%d", &c);

                    printf("The equation you formed: %dx^2+(%dx)+(%d)\n", a, b, c);

                    delta = (b * b) - 4 * a * c;
                    printf("Delta: %d\n", delta);
                    root1 = (-b + delta) / (2 * a);
                    root2 = (-b - delta) / (2 * a);

                    printf("Root 1: %d\nRoot 2: %d\n", root1, root2);
                    break;
                }
            case 6 :
                {
                    printf("Exiting the program...\n");
                    return 0;
                }
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }
}
