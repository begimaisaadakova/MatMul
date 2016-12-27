#include<stdio.h >
#include "MatrisMul.h"
#define SIZE 100
 

int main()
{
  int matrixA[SIZE][SIZE],matrixB[SIZE][SIZE],result[SIZE][SIZE];   /*name of the matrices*/
  int row1,col1,row2,col2;                                          /*rows and columns of the fisrt and second matrices*/
     
  printf("Enter the size of MatrixA Row1: ");
  scanf("%d",&row1);
  printf("Enter the size of MatrixA Column1: ");
  scanf("%d",&col1);
  printf("Enter the size of MatrixB Row2: ");
  scanf("%d",&row2);
  printf("Enter the size of MatrixB Column2: ");
  scanf("%d",&col2);
  
  if(col1!=row2)                               /*If column of first matrix in not equal to row of second matrix, asking user to enter the size and values of matrix again.*/
  {
   printf("Invalid Order of matrix\n Please re-enter\n");
     
   printf("Enter the size of MatrixA Row1: ");
   scanf("%d",&row1);
   printf("Enter the size of MatrixA Column1: ");
   scanf("%d",&col1);
   printf("Enter the size of MatrixB Row2: ");
   scanf("%d",&row2);
   printf("Enter the size of MatrixB Column2: ");
   scanf("%d",&col2);
   
     
   printf("Enter %d elements for matrixA: \n",row1*col1);    /*Input data for the matrices*/
   read_matrix(matrixA,row1,col1);
   printf("Enter %d elements for matrixB: \n",row2*col2);  
   read_matrix(matrixB,row2,col2);
   
   printf("MatrixA is :\n");                                        /* Print out the entered datas */
   print_matrix(matrixA,row1,col1);                                  
   printf("MatrixB is :\n");
   print_matrix(matrixB,row2,col2);
    
   MatrisMatMul(matrixA,matrixB,result,row1,col1,col2);              /*result of the multiplication*/
   printf("Result Matrix is :\n");
   print_matrix(result,row1,col2);
  }
  else
  {   
   printf("Enter %d elements for matrixA: \n",row1*col1);    
   read_matrix(matrixA,row1,col1);
   printf("Enter %d elements for matrixB: \n",row2*col2);  
   read_matrix(matrixB,row2,col2);
   
   printf("MatrixA is :\n");                                        
   print_matrix(matrixA,row1,col1);                                  
   printf("MatrixB is :\n");
   print_matrix(matrixB,row2,col2);
    
   MatrisMatMul(matrixA,matrixB,result,row1,col1,col2);              
   printf("Result Matrix is :\n");
   print_matrix(result,row1,col2);
  }
  return 0 ;
}

