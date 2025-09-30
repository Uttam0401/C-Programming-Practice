//Merging Of Two Arrays.
include<stdio.h>
int main(){
    int Arr1[3], Arr2[3];
    int Merge[6];
    printf("Enter The Values In First Arrays");
    for(int i=0; i<3; i++){
        scanf("%d",&Arr1[i]);
    }
    printf("Enter The Values In Second Arrays");
    for(int j=0; j<3; j++){
        scanf("%d",&Arr2[j]);
    }
    int merged[3 + 3];
    int i =0, j =0,k =0;

    while(i < 3){
        merged[k++] = Arr1[i++];
    }

    while(j < 3){
        merged[k++] = Arr2[j++];
    }
    printf("Merged Array:");
    for(int i=0; i<6; i++){
        printf("%d",merged[i]);
    }
    return 0;
}
