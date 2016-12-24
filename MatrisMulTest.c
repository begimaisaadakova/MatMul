#include <stdio.h>
#include "MatrisMul.h"

int **MatrisMatMul(int **matrix1, int **matrix2,int row1,int column1,int column2) ;
int **read_matrix(int rows, int cols);
void print_matrix(int rows, int cols,int **mat);
void free_matrix(int **mat);


int main()
 {
   int i, j;
   int **A,**B,**res;                            /*name of the matrices*/
   int row1, col1, row2, col2;                   /*rows and columns of the fisrt and second matrices*/
  
   printf("Enter # of rows of matrix1:");        
   scanf("%d",&row1);
   printf("Enter # of cols of matrix1:");
   scanf("%d",&col1);
  
   printf("Enter # of rows of matrix2:");
   scanf("%d",&row2);
   printf("Enter # of cols of matrix1:");
   scanf("%d",&col2);
  
    if(col1!=row2)                        /*If column of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.*/
	{
     printf("Invalid Order of matrix.\n");
     printf("Enter # of rows of matrix1:");        
     scanf("%d",&row1);
     printf("Enter # of cols of matrix1:");
     scanf("%d",&col1);
  
     printf("Enter # of rows of matrix2:");
     scanf("%d",&row2);
     printf("Enter # of cols of matrix1:");
     scanf("%d",&col2);   
    }
        
   printf("Matrix, enter %d elements for matrix1: \n",row1*col1);        /*Input data for the matrices*/ 
   A = read_matrix(row1,col1); 
   printf("Matrix, enter %d elements for matrsix2: \n",row2*col2);
   B = read_matrix(row2,col2); 
  
   printf("Your Matrix A:\n");            /* Print the entered data */
   print_matrix(row1,col1,A);
   printf("Your Matrix B:\n");            
   print_matrix(row2,col2,B);          
             
   res=MatrisMatMul(A,B,row1,col1,col2) ;                /*result of the multiplication*/
   printf("\nThe Multiplication of two matrix is:\n");
   print_matrix(row1,col2,res); 
	        
   free_matrix(A);            /* Free the matrices */
   free_matrix(B); 
   free_matrix(res);
   return 0;
 }
 

