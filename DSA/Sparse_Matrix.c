//Write A Program To Check Sparse Matrix And Not Sparse Matrix.

#include<stdio.h>
 int main(){
    int Arr[3][3];
   int count = 0;
   int notSparse = 0;
   printf("Please Enter The Elements Of The Matrix:\n");
   for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&Arr[i][j]);
        }
   }

   printf("Display The Elements Of The Matrix:\n");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d\t",Arr[i][j]);
            }
            printf("\n");
        }

        printf("To View The Elements Of The Matrix Are Sparse Matrix Or Not Sparse Matrix:\n\n\t*******************************************************\n\n");

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(Arr[i][j] == 0)
                count++;
            else{
                notSparse++;
            }
            }
        }
            if(count > notSparse){
                printf("The Numbers Of Zero = %d\n",count);
                printf("Its Is A Sparse Matrix:");
            }
            else{
                printf("The Numbers Of Non Zero = %d\n",notSparse);
                printf("Its Is Not A Sparse Matrix:");
            }
        }

 