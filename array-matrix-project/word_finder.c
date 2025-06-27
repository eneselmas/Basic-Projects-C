/*
Author: Enes Elmas
Date: 2022-11-04
Description:This C program allows the user to input a long text and a word to search for within that text.
It calculates the lengths of both the main text and the search word, and then attempts to locate
the sequence of characters that match the word. Finally, it prints the index range where the word
is found within the text.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int c, a=0, b=0, i, j, length1=0, length2=0, g=0, h=0;
    char text[100];
    char word[100];


    printf("Enter a long text: ");
    gets(text);
    printf("Enter the word you want to find in the text: ");
    gets(word);

    for(a=0 ; text[a]!='\0' ; a++)
    {
        length1 = length1 + 1;
    }
    printf("Length of text = %d\n", length1);

    for(b=0 ; word[b]!='\0' ; b++)
    {
        length2 = length2 + 1;
    }
    printf("Length of word = %d\n", length2);

    for(i = g ; text[i] != '\0' ; i++)
    {
        for(j = h ; j <= length2 ; j++)
        {
            if(text[i] == word[h])
            {
                g = i;
                h++;
            }
        }
    }

    printf("\nThe word is found at index = [%d...%d]\n", g - h + 1, g);

    return 0;
}
