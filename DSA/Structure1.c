//With Typedef
#include<stdio.h>
#include<string.h>
//With Typedef
   typedef struct{
        char Name[50];
        int Age;
        float Height;
    }Person;
    
        void main()
        {
            //Declare The struct Variables
           Person person1;

            //Access The Assign Values.
            printf("Enter The Names:-");
            fgets(person1.Name,sizeof(person1.Name),stdin);
            printf("Enter The Ages:-");
            scanf("%d",&person1.Age);
            printf("Enter The Height:-");
            scanf("%f",&person1.Height);

            //Print The Values.
            printf("\nName: %s",person1.Name);
            printf("Age: %d\n",person1.Age);
            printf("Height: %.2f\n",person1.Height);
        }


 
