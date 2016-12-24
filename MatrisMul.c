#include <stdio.h>
#include <stdlib.h>

 int **MatrisMatMul(int **matrix1, int **matrix2,int row1,int column1,int column2)   
  {
    int i,j,k;
    int **result=(int**)calloc(row1,sizeof(int*));          /*allocate memory for arrays with size of integers*/
    for(i=0;i<column2;i++)
      result[i]=(int*)calloc(column2,sizeof(int));       
    
     for(i=0;i<row1;i++)
	 {
        for(j=0;j<column2;j++)
		{
          result[i][j]=0;                                /*Initializing elements of matrix to 0*/
          for(k=0;k<column1;k++)                    
          result[i][j]+= matrix1[i][k]*matrix2[k][j];    /*Multiplying matrix1 and matrix2 and storing in array result.*/
	    }
	    printf("\n");
     }  
     return result;
  }
 
int **read_matrix(int rows, int cols)
  {
    int i,j;
    int **mat = (int **) malloc(sizeof(int*)*rows);            /* allocate  matrix*/
    for(i=0; i<rows; i++)
       mat[i] = (int*) malloc(sizeof(int)*cols);        
  
         for(i=0; i<rows; i++)
		 {
           for(j=0; j<cols; j++)
		   {
           	printf("Enter matrix[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
           }
         }
     return mat;
  }

void print_matrix(int rows, int cols,int **mat)
  {
    int i=0,j=0;
    for(i=0; i<rows; i++)                   /* Iterate of each row */
      {
        for(j=0; j<cols; j++)              /* In each row, go over each col element  */
        {
         printf("%d\t",mat[i][j]);          /* Print each row element */
        }
         printf("\n");
      }
  }

void free_matrix(int **mat)              /*empty the matrix*/
  {
    int i,rows;
    for(i=0;i<rows;i++)    
    free(mat[i]);
    free(mat);
  }


