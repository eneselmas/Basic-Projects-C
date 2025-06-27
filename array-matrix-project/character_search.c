/*
Author: Enes Elmas
Date: 2022-11-04
Description:This C program takes a text input from the user and a specific character to search for within that text.
It calculates the length of both the input text and the character string, then scans the text to find
all occurrences of the specified character. It prints the positions where the character is found and
displays the total number of occurrences.

*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int a=0, b=0, i, j, size1=0, size2=0, count=0;
    char text[100];
    char letter[100];

    printf("Enter a text: ");
    gets(text);
    printf("Enter the letter you want to find: ");
    scanf("%c", &letter);

    for(a=0 ; text[a]!='\0' ; a++)
    {
        size1 = size1 + 1;
    }
    printf("Size of text = %d\n", size1);

    for(b=0 ; letter[b]!='\0' ; b++)
    {
        size2 = size2 + 1;
    }
    printf("Size of letter = %d\n", size2);


    for(i=0 ; i < size1 ; i++)
    {
        for(j=0 ; j <= size2 ; j++)
        {
            if(text[i] == letter[j])
            {
                printf("[%d]=[%d] contains the letter %c.\n", i, j, text[i]);
                count = count + 1;
            }
        }
    }
    printf("There are %d occurrences of the letter %c.", count, letter[0]);

    return 0;
}
