//2d memory allocation
#include<stdio.h>
#include<stdlib.h>
  int main(){
    int rows, cols;
    printf("Enter the number of rows::- ");
    scanf("%d",&rows);
    printf("Enter the number of columns:- ");
    scanf("%d",&cols);

    int** matrix = (int**)malloc(rows*sizeof(int));
    for(int i=0; i<rows; i++){
        matrix[i] = (int*)malloc(cols*sizeof(int));
    }
    printf("Enter the element of the matrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Enter The Value of the row number %d and the column number %d :- ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
  }
    printf("Elements Of The Matrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
         }

         for(int i=0; i<rows; i++){
            free(matrix[i]);
         }
         free(matrix);
         return 0;
  }