/*
Author: Enes Elmas
Date: 2022-11-04
*/



/*Write a C program that finds the row average closest to the overall average in a given matrix.

Description :This C program calculates the overall average of the numbers in a 3x4 matrix,
// then computes the average of each row individually. It determines which row average
// is numerically closest to the overall average and prints that result.
// The program also prints the sum of all elements, individual row averages,
// and the absolute differences between each row average and the overall average.*/

int main()
{
    int i, j;
    int matrix[3][4] = {{5, 3, 7, 13}, {11, 2, 9, 4}, {6, 8, 10, 1}};
    float average, total = 0, row1, row2, row3, a, b, c;

        for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            total = total + matrix[i][j];
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(i == 0)
                row1 = row1 + matrix[i][j];
            else if(i == 1)
                row2 = row2 + matrix[i][j];
            else
                row3 = row3 + matrix[i][j];
        }
    }

    printf("Sum of all numbers = %.0f \n", total);
    average = total / 12;
    printf("Overall average = %.2f \n", average);
    printf("Row 1 average = %.2f \n", row1 / 4);
    printf("Row 2 average = %.2f \n", row2 / 4);
    printf("Row 3 average = %.2f \n", row3 / 4);

    a = average - row1 / 4;
    b = average - row2 / 4;
    c = average - row3 / 4;

    if(a < 0)
        a = (row1 / 4) - average;
    if(b < 0)
        b = (row2 / 4) - average;
    if(c < 0)
        c = (row3 / 4) - average;

    printf("Difference with row 1 = %.2f\n", a);
    printf("Difference with row 2 = %.2f\n", b);
    printf("Difference with row 3 = %.2f\n", c);

    if(a < b && a < c)
        printf("The closest row is row 1.");
    else if(b < a && b < c)
        printf("The closest row is row 2.");
    else
        printf("The closest row is row 3.");

    return 0;
}

//---------------------------------------------------------------------------------------------------


/*Write a C code that finds the largest and smallest elements in a matrix.
Also, provide the index information of the largest and smallest elements.

Description : This C program finds the maximum and minimum elements in a 2D matrix
along with their respective indices (row and column positions). It iterates through
all elements of the matrix, updates the maximum and minimum values when a larger or
smaller element is found, and keeps track of their locations. Finally, it prints the
maximum and minimum values along with their matrix indices.*/

int main()
{
    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;
    int matrix[2][3]={{8,6,5},{13,11,9}};
    int row = sizeof(matrix)/sizeof(matrix[0]);
    int col = sizeof(matrix[0])/sizeof(int);
    int max = matrix[0][0];
    int min = matrix[1][1];

    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }

            if(min > matrix[i][j])
            {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    printf("Maximum value: %d at index matrix[%d][%d]\n", max, maxRow, maxCol);
    printf("Minimum value: %d at index matrix[%d][%d]\n", min, minRow, minCol);
}

//---------------------------------------------------------------------------------------------------

/*Write a C code that transfers the sum of the rows in a given matrix to array A,
the sum of the columns to array B, and sums all the numbers in the matrix.

Description : This C program calculates the sum of all elements in a given matrix.
Additionally, it computes the sum of each row and stores these values in an array A.
Similarly, it calculates the sum of each column and stores these values in an array B.
Finally, it prints the total sum of all elements, the row sums, and the column sums.
The matrix dimensions and contents are predefined in the code.
*/

int main()
{
    int total = 0;
    int matrix[3][2] = {{5, 6}, {9, 3}, {11, 7}};
    int row = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(int);

    int A[row];
    int B[col];


    for(int j = 0; j < col; j++) {
        B[j] = 0;
    }

    for(int i = 0; i < row; i++) {
        int rowSum = 0;
        for(int j = 0; j < col; j++) {
            rowSum += matrix[i][j];
            B[j] += matrix[i][j];
            total += matrix[i][j];
        }
        A[i] = rowSum;
    }


    printf("Sum of all elements in matrix: %d\n", total);

    printf("Row sums (Array A): ");
    for(int i = 0; i < row; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Column sums (Array B): ");
    for(int j = 0; j < col; j++) {
        printf("%d ", B[j]);
    }
    printf("\n");

    return 0;
}
//---------------------------------------------------------------------------------------------------

/*Write a C program that displays the elements of a matrix separately by rows and columns on the screen.*/

int main()
{
    int matrix[2][3]={{1,9,8},{5,11,13}};
    int row=sizeof(matrix)/sizeof(matrix[0]);
    int col=sizeof(matrix[0])/sizeof(int);

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
