/*
Author: Enes Elmas
Date: 2022-10-20
Description: This program calculates a new salary based on the user's current salary,
number of children, and previous raise amount. The raise percentage is
determined by salary thresholds. An additional amount is added for each child.
If the newly calculated raise is greater than or equal to the previous raise,
it is used to compute the new salary. Otherwise, the previous raise is applied.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentSalary, numberOfChildren, previousRaise, newSalary, newRaise;

    printf("Enter your current salary: ");
    scanf("%d",&currentSalary);

    printf("Enter the number of children: ");
    scanf("%d",&numberOfChildren);

    printf("Enter the previous raise : ");
    scanf("%d",&previousRaise);

    if(currentSalary<2000)
    {
        newRaise=currentSalary*0.2;
    }
    else if(currentSalary<3000)
    {
        newRaise=currentSalary*0.15;
    }
    else
    {
        newRaise=currentSalary*0.1;
    }

    newRaise=newRaise+numberOfChildren*30;

    if(newRaise >= previousRaise)
    {
        newSalary=newRaise+currentSalary;
        printf("yeni maasiniz:%d",newSalary);
    }
    else
    {
        newSalary=previousRaise+currentSalary;
        printf("yeni maasiniz:%d",newSalary);
    }

    return 0;
}
