/*
Author: Enes Elmas
Date: 2022-10-20
Description: A simple C code for recruitment
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char gender , answer ;

    printf("Enter your gender (Male:M / Female:F): ");
    scanf("%s",&gender);

    if(gender=='M')
    {
        printf("Have you done your military service? (Y/N): ");
        scanf("%s",&answer);
        if(answer=='Y')
        {
            printf("<<You are hired>>");
        }
        else
        {
            printf("<<You are not hired>>");
        }
    }
    else
    {
        printf("Are you married? (Y/N): ");
        scanf("%s",&answer);
        if(answer=='Y')
        {
            printf("<<You are not hired>>");
        }
        else
        {
            printf("<<You are hired>>");
        }
    }

    return 0;
}
