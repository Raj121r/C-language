#include <stdio.h>
#include <stdlib.h>
int main()
{

int arr[5];
     printf("enter the element\n");
     for(int i=0; i<5; i++) {
     scanf("%d",&arr[i]);
     }
     
     int *p=(int*) malloc(5*sizeof(int));
     
     if(p==NULL){
         printf("memory allocation is failed");
         return 1;
     }
     else {
         printf("memory allocation is successful using malloc\n");
     }
     
     printf("enter element in the dynamic allocated space\n");
     
     for(int i=0;i<5;i++){
     scanf("%d",&p[i]);
     }
     printf("dynamically allocated array\n");

     for(int i=0;i<5;i++){
          printf("%d\n",p[i]);
     }
     free(p);
   

    return 0;
}
