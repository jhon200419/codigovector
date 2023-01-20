#include <stdio.h>

int main(){

int a;
FILE *v1=NULL;
v1=fopen("vector.txt","r");

FILE *v2=NULL;


v2=fopen("vector2.txt","w");
   
   int cont=1;
   while (!feof(v1))
   {
    fscanf(v1, "%d", &a);

        if (a%5==0)
        {
            fprintf(v2," %d Es multiplo de 5 \n",a);
        }
        
        
        else{
            fprintf(v2," %d \n ", a);
        }
        

   }
   
    
    fclose(v1);
    fclose(v2);

    return 0;


}