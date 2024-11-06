#include <stdio.h>
#include <stdlib.h>

int main()
{

int inputarray[] = {1,9,8,4};

int leftarray[2];
int rightarray[2];

int size = sizeof(inputarray) / sizeof(inputarray[0]);
for (int i = 0; i < size; i++)
{
    if (i<(size/2))
    {
        leftarray[i] = inputarray[i];
    }else{
        rightarray[i-2] = inputarray[i];
    }
}

printf("%d\n",leftarray[1]);
printf("%d",rightarray[1]);




}


