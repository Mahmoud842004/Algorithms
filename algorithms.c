#include <stdio.h>
#include <stdlib.h>

int *thereturn()
{

    static int array[5] = {1, 9, 3, 6, 5};

    return array;
}

int main()
{
    int *item = thereturn();

    printf("the array is :");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", *item++);
    }
}