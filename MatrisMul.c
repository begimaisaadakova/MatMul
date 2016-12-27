#include<stdio.h >
#include "MatrisMul.h"
#define SIZE 100

 void MatrisMatMul(int x[][SIZE],int y[][SIZE],int result[][SIZE],int row1,int column1,int column2)  /*multiplication function*/
  {
  	int i,j,k;
    for (i=1;i<=row1;i++)
    {
      for(j=1;j<=column2;j++)
       {
	     result[i][j]=0;                             /*Initializing elements of matrix to 0*/
	     for(k=1;k<=column1;k++)
	     result[i][j]+= x[i][k]*y[k][j];             /*Multiplying first matrix with second matrix and storing in array "result".*/
       }
    }
  }
 
  void read_matrix(int x[][SIZE], int rows,int columns)      
  {
  	 int i,j,k;
     for (i=1;i<=rows;i++)                             /* Iteration of rows */
	  {
         for(j=1;j<=columns;j++)                      /* In each row iteration of columns  */
		 {
        	printf("Enter elements [%d][%d]: ", i , j);  
        	scanf("%d",&x[i][j]);                        /*input  datas for matrix*/
		 }
	 }
  }
  
  void print_matrix(int x[][SIZE], int rows,int columns)     
  {
  	 int i,j,k;
     for (i=1;i<=rows;i++)
      {
	    for(j=1;j<=columns;j++)
		{
	      printf("%d \t",x[i][j]);                    /*print out matrix*/
        }
        printf("\n");
      }
  }
 

