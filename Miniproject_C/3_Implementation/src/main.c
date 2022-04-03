#include <stdio.h>
#include "func1.c"
#include "func2.c"
#include "func3.c"
#include "header1.h"
#include "header2.h"


int main()
{

    int m, n, p;

    int matrixA[50][50]; 
    int matrixB[50][50];
    
    int r1, c1;
    int r2, c2;
    
    int calculation;
    
    int add = 1;
    int sub = -1;
    int scalar = 0;
    
    char repeat = 'Y';

    while (repeat == 'Y')
	{

        printf("\nCalculations to be performed \n");
        
        printf("\t1. to find transpose of a matrix\n");
        printf("\t2. Matrix Addition\n");
        printf("\t3. Matrix Subtraction\n");
        printf("\t4. Matrix Scalar Multiply\n");
        printf("\t5. Matrix multiplication\n");
        
        printf("Choose your option ");
        scanf(" %d", &calculation);
	

	switch (calculation)
		{	
		
			case 1:
        
        	printf("\nprovide no.of.rows and colums for MatA: ");
            scanf("%d%d", &r1, &c1);
			
			
			printf("\n\tEnter the elements of MatA a %d x %d matrix.\n", r1, c1); 
            readMatrix(matrixA, r1, c1);
            
            printf("\n\t\tMatA\n\n");
            printMatrix(matrixA, r1, c1);
            
            printf("the transpose of matrix is:\n");
			matrixTranspose(matrixA, matrixB, r1, c1);
			
			break;
			
		case 2:
			
			printf("\nprovide no.of.rows and colums for MatA:");
            scanf("%d%d", &r1, &c1);

            printf("provide no.of.rows and colums for MatB :");
            scanf("%d%d", &r2, &c2);

            while ((r1 != r2) && (c1!= c2))
			{
                printf("\nKindly provide the matrices in same size\n");
                printf("\nprovide no.of.rows and colums for MatA: ");
                scanf("%d%d", &r1, &c1);

                printf("provide no.of.rows and colums for MatB: ");
                scanf("%d%d", &r2, &c2);

            }


            printf("\n\tEnter the elements of MatA a %d x %d matrix.\n", r1, c1); 
            readMatrix(matrixA, r1, c1);
            
            printf("\n\t\tMatA\n\n");
            printMatrix(matrixA, r1, c1);


            printf("\n\tEnter the elements of MatB a %d x %d matrix.\n", r2, c2); 
            readMatrix(matrixB, r2, c2);
            
            printf("\n\t\tMatB\n\n");
            printMatrix(matrixB, r2, c2);


            printf("\nThe addition of two matrices_matA + matB is : \n");
            matrixAddSub(matrixA, matrixB, r1, c1, add);

            break;

        case 3:

            printf("\nprovide no.of.rows and colums for MatA: ");
            scanf("%d%d", &r1, &c1);

            printf("provide no.of.rows and colums for MatB: ");
            scanf("%d%d", &r2, &c2);

            while ((r1 != r2) && (c1 != c2))
			{
                printf("\nKindly provide the matrices in same size\n");
                printf("\nprovide no.of.rows and colums for MatA: ");
                scanf("%d%d", &r1, &c1);

                printf("provide no.of.rows and colums for MatB: ");
                scanf("%d%d", &r2, &c2);
            }

            printf("\n\tEnter the elements of MatA a %d x %d matrix.\n", r1, c1); 
            readMatrix(matrixA, r1, c1);
            
            printf("\n\t\tMatA\n\n");
            printMatrix(matrixA, r1, c1);

            printf("\n\tEnter the elements of MatB a %d x %d matrix.\n", r2, c2); 
            readMatrix(matrixB, r2, c2);
            
            printf("\n\t\tMatB\n\n");
            printMatrix(matrixB, r2, c2);

            printf("\nSubtraction of two matrices_matA - matB is : \n");
            matrixAddSub(matrixA, matrixB, r1, c1, sub);
            break;

        case 4:

            printf("\nEnter the scalar value: ");
            scanf("%d", &scalar);
            printf("\nThe scalar is: %d ", scalar);


            printf("\nprovide no.of.rows and colums for MatA: ");
            scanf("%d%d", &r1, &c1);

            printf("\n\tEnter the elements of MatA a %d x %d matrix.\n", r1, c1); 
            readMatrix(matrixA, r1, c1);
            
            printf("\n\t\tMatA\n\n");
            printMatrix(matrixA, r1, c1);

            printf("\nThe scalar multiplication _ matrixA * %d is: \n", scalar);
            matrixScalarMultiply(matrixA, scalar, r1, c1);

            break;

        case 5:
            
            printf("\nprovide no.of.rows and colums for MatA: ");
            scanf("%d%d", &r1, &c1);

            printf("provide no.of.rows and colums for MatB: ");
            scanf("%d%d", &r2, &c2);

           
            while (c1 != r2)
            {
                printf("\n\nError! column of first matrix not equal to row of second.\n\n");
                printf("\nprovide no.of.rows and colums for MatA: ");
                scanf("%d%d", &r1, &c1);

                printf("provide no.of.rows and colums for MatB: ");
                scanf("%d%d", &r2, &c2);
            }

            
            printf("\n\tEnter the  elements of MatA a %d x %d matrix.\n", r1, c1); 
            readMatrix(matrixA, r1, c1);
            
            printf("\n\t\tMatA\n\n");
            printMatrix(matrixA, r1, c1);

            
            printf("\n\tEnter the elements of MatB a %d x %d matrix.\n", r2, c2); 
            readMatrix(matrixB, r2, c2);
            
            printf("\n\t\tMatA\n\n");
            printMatrix(matrixB, r2, c2);

        	matrixMultiply(matrixA, matrixB, r1, c1, c2);

            break;
            
        	default:
         
            printf("\nChoose the correct option of calculation between 1 and 5.");
            break;
        }

        printf("\n\n want to calculation again? Y/N\n");
        scanf(" %c", &repeat);
        
    }
    printf("\n\nThank you!\n\n");

    return 0;
}