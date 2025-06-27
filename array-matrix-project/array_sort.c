/*
Author: Enes Elmas
Date: 2022-11-10
Description:This C program sorts an array of 10 integers in ascending order using a simple selection sort algorithm.
It iterates through the array elements, compares each element with the subsequent elements, and swaps them
if they are out of order. After sorting, the program prints the sorted array elements to the console.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int temp = 0;
    int array[10] = {5,8,11,13,6,3,9,15,17,12};
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
