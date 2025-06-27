/*
Author: Enes Elmas
Date: 2022-11-10
Description:This C program demonstrates how to convert a 2D matrix into a 1D array and then sort that array.
The program starts by initializing a 3x2 matrix with fixed integer values.
It then copies the elements from the matrix into a one-dimensional array while printing the matrix form.
After the conversion, it displays the array contents and proceeds to sort the array in ascending order
using a simple sorting algorithm (similar to bubble sort).
Finally, the sorted array is printed in a tab-separated format.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int index = -1, temp;
    int matrix[3][2] = { {6, 7}, {2, 3}, {8, 1} };
    int array[6];
    printf("Matrix form:\n--------------------------\n");

       for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d  ", matrix[i][j]);
                index = index + 1;
                array[index] = matrix[i][j];
            }
            printf("\n");
        }

        printf("------------------------------------\n");

        printf("Converted to array:\n------------------------------------------------\n");

        for (index = 0; index < 6; index++)
        {
            printf("%d ", array[index]);
        }

        printf("\n------------------------------------------------\n");

        printf("Sorted array:\n-------------------------------------------------\n");

        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
            printf("%d\t", array[i]);
        }

        printf("\n-----------------------------------------------------");

        return 0;

}
