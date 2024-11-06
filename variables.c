#include <stdio.h>
#include <stdlib.h>

int main()
{

 int array [] = {1,3,5,2,4,6};
 
 int lenght = sizeof(array)/sizeof(array[0]);

 int insertion = 0;


 for (int i = 0; i < lenght-1 ; i++)
 {
    
   for(int j = i+1;j<lenght;j++)
    {
      if (array[i]>array[j])
      {
        ++insertion;
      }
      
    }
    
 }
 printf("%d\n",insertion);


 
}
