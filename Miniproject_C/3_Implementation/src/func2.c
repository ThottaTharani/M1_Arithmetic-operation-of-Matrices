int matrixScalarMultiply(int arr[50][50], int scalar, int rows, int colums)
{
    int m, n;
    int scaM[50][50];
    for (m= 0; m < rows; m++)
	{
        for (n = 0; n < colums; n++)
		{
            scaM[m][n] = scalar * arr[m][n];
            printf("%d\t", scaM[m][n]);
        }
        printf("\n");
    }

}

int matrixMultiply(int arr1[50][50], int arr2[50][50], int rowsA, int columsA,int columsB)
{
    int m, n, p;
    int mulM[50][50];

     for (m = 0; m<rowsA; ++m)
        for (n= 0; n<columsB; ++n)
        {
            mulM[m][n] = 0;
        }

    for (m= 0; m<rowsA; ++m)
        for (n = 0; n<columsB; ++n)
            for (p = 0; p<columsA; ++p)
            {
                mulM[m][n] += arr1[m][p] * arr2[p][n];
            }
    printf("\nOutput Matrix:\n");
    for (m = 0; m<rowsA; ++m)
        for (n = 0; n<columsB; ++n)
        {
            printf("\t%d ", mulM[m][n]);
            if (n == columsB - 1)
                printf("\n\n");
        }
}

