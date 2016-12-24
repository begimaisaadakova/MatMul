#ifndef MatrisMul_H
#define MatrisMul_H

int **MatrisMatMul(int **matrix1, int **matrix2,int row1,int column1,int column2);      /*prototype for multiplication of two matrix*/
int **read_matrix(int rows, int cols);                                                  /*prototype to read the given matrix*/
void print_matrix(int rows, int cols,int **mat);                                        /*prototype to print out the matrix*/
void free_matrix(int **mat);                                                            /*prototype to empty value of the matrix*/

#endif
