int matrixTranspose(int arr1[50][50], int arr2[50][50], int rowsA, int columsA)
{

	int m, n;

	for (m = 0; m<rowsA; ++m)
	 {
		for (n= 0; n <columsA; ++n) 
		{
			arr2[m][n] = arr1[n][m];
			printf("\t%d ",arr2[m][n]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int matrixAddSub(int arr1[50][50], int arr2[50][50], int rows, int colums, int mul)
{
    int m, n;
    int sumM[50][50];
    int scaM[50][50];
    for (m = 0; m < rows; m++)
	{
        for (n = 0; n < colums; n++)
		{
            scaM[m][n] = mul * arr2[m][n];
            }
        }


    for (m = 0; m < rows; m++)
	{
        for (n = 0; n < colums; n++)
		{
            sumM[m][n] = arr1[m][n] + scaM[m][n];
            printf("\t%d", sumM[m][n]);
        }
        printf("\n");
    }
}
