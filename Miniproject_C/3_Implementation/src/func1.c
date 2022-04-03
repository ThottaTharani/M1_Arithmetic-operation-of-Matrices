int readMatrix(int arr[50][50], int rows, int colums)
{
    int m, n;
    for (m = 0; m < rows; m++)
	{
        printf("\tenter %d values for the %d st row : ", colums, m + 1);
        for (n = 0; n < colums; n++)
		{
            scanf("%d", &arr[m][n]);
        }
    }

    return 0;
}

int printMatrix(int arr[50][50], int rows, int colums)
{
    int m, n;

    for (m= 0; m < rows; m++) 
	{
        for (n = 0; n < colums; n++)
		{
            printf("\t%d", arr[m][n]);
        }
        printf("\n");
    }
}


