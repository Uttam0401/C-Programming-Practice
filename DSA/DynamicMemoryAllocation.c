/*//Dynamically Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
  int main(){
    int rows;
    int* cols;
    int i = 0;

    printf("Enter The Numbers Of Rows:- ");
    scanf("%d",&rows);

    //To Store the number of columns in each rows.
    cols = (int*)malloc(rows*sizeof(int));

    //Allocate memory for 2D array.
    int** matrix = (int**)malloc(rows*sizeof(int*));

    for(int i=0; i<rows; i++,cols++){
        printf("Enter The Numbers Of Columns Of Rows Number %d :-",i+1 );
        scanf("%d",cols);

        //Address of first column of each row.
        matrix[i] = (int*)malloc(*cols * sizeof(int));
    }
    //Cols has reached the end of the matrix
    //Read and print the elements of the 2D Arrays.
    //Send Cols to the first row again.

    cols = cols-i;
    printf("Enter The Elements Of The Matrix:\n");
    for (int i=0; i < rows; i++,cols++){
        for (int j=0; j < *cols; j++){
            printf("Enter The Value Of Rows %d And Column %d ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
    }
  }

  cols = cols-i;
  printf("Elements of The Matrix:\n");
  for(int i=0; i<rows; i++,cols++){
    for(int j=0; j<*cols; j++){
        printf(" %d ",matrix[i][j]);
  }
  printf("\n");
  }
  //Sending Cols to beginning
  cols = cols-i;
  //free the dynamically allocated memory.
  for(int i=0; i<rows; i++){
    free(matrix[i]);
  }
  free(matrix);
  free(cols);
  return 0;
  }
  */
  #include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;
    int* cols;
    int i = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // To store the number of columns in each row
    cols = (int*)malloc(rows * sizeof(int));

    // Allocate memory for 2D array
    int** matrix = (int**)malloc(rows * sizeof(int*));

    for (i = 0; i < rows; i++) {
        printf("Enter the number of columns for row %d: ", i + 1);
        scanf("%d", &cols[i]);

        // Allocate memory for columns in each row
        matrix[i] = (int*)malloc(cols[i] * sizeof(int));
    }

    // Read and print the elements of the 2D array
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            printf("Enter the value for row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(cols);

    return 0;
}
