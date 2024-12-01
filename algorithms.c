#include <stdio.h>
#include <stdlib.h>

int *splithalfarray(int array[], int whichhalf)
{
    int returnarray[];
    int arraysize = sizeof(array) / sizeof(array[0]);
    if (whichhalf == 1)
    {
        for (int i = 0; i < arraysize / 2; i++)
        {
            returnarray[i] = array[i];
        }
        return returnarray;
    }
    else
    {
        for (int i = (arraysize / 2); i < arraysize; i++)
        {
            returnarray[i - (arraysize / 2)] = array[i];
        }
        return returnarray;
    }
}

int *merge(int firstlist[], int secondlist[])
{
    int mergedlist[];
    int j = 0;
    int k = 0;
    int totallength = (sizeof(firstlist) / sizeof(firstlist[0])) * 2;

    for (int i = 0; i < totallength; i++)
    {
        if (firstlist[j] < secondlist[k])
        {
            mergedlist[i] = firstlist[j];
            j++;
        }
        else
        {
            mergedlist[i] = secondlist[k];
            k++;
        }
    }
    return mergedlist;
}

int *mergesort(int array[])
{
    int arraysize = sizeof(array) / sizeof(array[0]);
    int firstsplitarray[];
    int secondsplitarray[];
    int firstsortedarray[];
    int secondsortedarray[];

    if (arraysize == 1)
    {
        int returnarray[] = {array[0]};
        return returnarray;
    }

    int *firstpointer = splithalfarray(array, 1);
    int *secondpointer = splithalfarray(array, 2);

    for (int i = 0; i < arraysize / 2; i++)
    {
        firstsplitarray[i] = *firstpointer++;
    }

    for (int i = 0; i < arraysize / 2; i++)
    {
        secondsplitarray[i] = *secondpointer++;
    }

    int *firstarray = mergesort(firstsplitarray);
    int *secondarray = mergesort(secondsplitarray);

    for (int i = 0; i < arraysize / 2; i++)
    {
        firstsortedarray[i] = *firstarray++;
    }
    for (int i = 0; i < arraysize / 2; i++)
    {
        secondsortedarray[i] = *secondarray++;
    }

    return merge(firstsortedarray, secondsortedarray);
}

int main()
{
    int *sortedpointer = mergesort({2, 1});
    for (int i = 0; i < 2; i++)
    {
        printf("The sorted list : %d", *sortedpointer++);
    }
}